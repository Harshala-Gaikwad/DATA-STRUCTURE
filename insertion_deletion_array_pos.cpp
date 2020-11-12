#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array :\n";
	cin>>n;
	int a[n];
	cout<<"Enter the elements :\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int pos,x,choice;
	cout<<"Enter choice:\n";
	cin>>choice;
	if (choice==1){
	cout<<"Enter position:\n";
	cin>>pos;
	cout<<"Enter the element to be inserted:\n";
	cin>>x;
	for(int i=n;i>=pos;i--){
		a[i]=a[i-1];
	}
	n = n+1;
	a[pos]=x;
}
    else if(choice==2){
    	cout<<"Enter the position of element to be deleted:\n";
    	cin>>pos;
    	for(int i=pos;i<n;i++){
    		a[i]=a[i+1];
		}
	}
	cout<<"Elements are:\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
