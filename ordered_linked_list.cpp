#include<iostream>
using namespace std;
struct node{
	int info;
	struct node *next;
};
struct node *start = NULL;

void Insert(int x){
    node *NN = new(node);
	NN->info = x;
	NN->next= NULL;
	if(start == NULL){
		start = NN;
	}
	else{
		node *p = start;
		while(p->info<NN->info){
			p = p->next;
		}
		NN->next=p->next;
		p->next=	NN;
	}
}
void Delete(){
	if(start==NULL){
		cout<<"\nLIST EMPTY\n";
	}
	else{
		cout<<"\nENTER POSITION : \n";
		cout<<"\n1.Deletion at beginning\n2.Deletion at end\n3.Deletion at position\n";
		int ch1;
		cin>>ch1;
		if(ch1==1)
				start = start->next;
		if(ch1==2){
		   node *p= start,*q = start;
			   while(p->next!=NULL){
			   	   q = p;
			   	   p=p->next;
			   }	
			   q->next=NULL;	
		}
		if(ch1==3){
		int pos;
			   cout<<"\nENTER POSITION\n";
			   cin>>pos;
			   node *p=start,*q=start;
			   int i=1;
			   while(i<pos){
			   	q = p;
			   	p=p->next;
			   }   
			   q->next=p->next;	
		}
	}
}
void display(){
	node *p= start;
	while(p!=NULL){
		cout<<"\n"<<p->info<<endl;
		p = p->next;
	}
}
int main(){
	int choice,flag=1;
	while(flag==1){
		cout<<"\nENTER THE LINKED LIST OPERATION\n";
		cout<<"\n1.INSERTION\n2.DELETION\n3.DISPLAY\n4.EXIT\n";
		cin>>choice;
		switch(choice){
			case 1:
				int x;
				cout<<"\nEnter element to be inserted : \n";
				cin>>x;
				Insert(x);
				break;
			case 2:
			    Delete();
				break;
			case 3:
			    display();
				break;
			case 4:
			     flag=0;
				 break;			
		}
	}
	return 0;
}
