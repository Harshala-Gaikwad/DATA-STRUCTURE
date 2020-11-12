#include<iostream>
using namespace std;
int top=-1;
void Insertion(int x,int a[],int n){
		if(top==n-1){
			cout<<"Stack Full\n";
		}
		else{
			top++;
		}
	
	a[top]=x;
}

void Deletion(int a[],int n){
	if(top==-1){
		cout<<"Stack Empty\n";
	}
	else{
		top--;
	}
}
void Display(int n,int a[]){
	for(int i=top;i<n;i++){
		cout<<a[i]<<endl;
	}
}
int main(){
	int n;
	cout<<"Enter the size\n";
	cin>>n;
	int a[n];
	int flag =1,ch;
	cout<<"Enter stack operation\n";
	cout<<"1.insertion\n2.deletion\n3.display\n4.exit\n";
	cin>>ch;
	while(flag==1){
	
	switch(ch){
		case 1:
			int x;
			cout<<"Enter element\n";
			cin>>x;
			Insertion(x,a,n);
			break;
		case 2:
		    Deletion(a,n);
			break;
		case 3:
		    Display(n,a);
			break;
		case 4:
		   flag =0;
		   break;			
	}
}
	return 0;
}
