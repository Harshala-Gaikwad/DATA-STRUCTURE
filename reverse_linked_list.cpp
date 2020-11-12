#include <iostream>
using namespace std;

struct Node{
 int data;
 Node *link;
};

Node *head=NULL;

void reverseList()
{
Node *p,*c,*n;
p=NULL;
c=head;
while(c!=NULL)
{

 n=c->link;
 c->link=p;
 p=c;
 c=n;
}
head=p;
}

void insertEnd (int d)
{

 Node *ptr = new Node();
 ptr->data=d;
 ptr->link=NULL;

 if(head==NULL)
 head=ptr;
 else
 {
  Node *temp = head;
  while(temp->link != NULL)
  {
   temp=temp->link;
  }
  temp->link=ptr;

 }

}

void displayList()
{
 Node *ptr=head;
 while(ptr!=NULL)
 {
  cout<<ptr->data<<" ";
  ptr=ptr->link;
 }
 cout<<"\n";
}

int main()
{
 insertEnd(1);
 insertEnd(2);
 insertEnd(3);
 insertEnd(4);
 insertEnd(5);

 displayList();
 reverseList();
 displayList();
 return 0;
}
