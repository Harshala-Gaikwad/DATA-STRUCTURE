

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *link;
};
Node *head=NULL;

void insertend(int d){
	Node *ptr = new Node();
	ptr->data=d;
	ptr->link=NULL;
	if(head==NULL){
		head=ptr;
	}
	else{
		Node *temp=head;
		while(temp->link!=NULL){
			temp=temp->link;
		}
		temp->link=ptr;
	}
}

void display(){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<endl;
}

void selectionSort(Node* head){ 
    Node* temp = head;  
    while (temp) { 
        Node* min = temp; 
        Node* r = temp->link; 
  		while (r) { 
            if (min->data > r->data) 
                min = r; 
  			r = r->link; 
        } 
		int x = temp->data; 
        temp->data = min->data; 
        min->data = x; 
        temp = temp->link; 
    } 
} 


int main(){
		insertend(8);
		insertend(3);
		insertend(34);
		insertend(23);
		insertend(4);
		insertend(21);
		cout<<"Before sorting: ";
		display();
		selectionSort(head);
		cout<<"After sorting: ";
		display();
	return 0;
}
