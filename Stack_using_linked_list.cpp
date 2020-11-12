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
					NN->next = start;
					start = NN;
	
	}
}
void Delete(){
	if(start==NULL){
		cout<<"\nLIST EMPTY\n";
	}
	else{
				start = start->next;
	}
}
void display(){
	node *p= start;
	while(p!=NULL){
		cout<<p->info<<endl;
		p = p->next;
	}
}
int main(){
	int choice,flag=1;
	while(flag==1){
		cout<<"\nENTER THE STACK USING LINKED LIST OPERATION\n";
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
