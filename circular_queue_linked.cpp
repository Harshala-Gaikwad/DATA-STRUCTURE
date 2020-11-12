#include<iostream>
using namespace std;
struct node{
	int info;
	node *next;	
};
node *front=NULL,*rear=NULL;
void Insert(int x){
	node *NN = new(node);
	NN->info=x;
	NN->next=NULL;
	if(front==NULL){
		front = NN;
		rear = NN;
	}
	else{
		rear->next = NN;
	}
	rear=NN;
	rear->next=front;
}
void Delete(){
	if(front==NULL){
		cout<<"Empty list\n";
	}
	else{
		if(front==rear){
			front = NULL;
			rear=NULL;
		}
		else{
			front = front->next;
		}
	}
}

void display(){
	node *p= front;
	while(p->next!=front){
		cout<<"\n"<<p->info<<endl;
		p = p->next;
	}cout<<p->info;
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

