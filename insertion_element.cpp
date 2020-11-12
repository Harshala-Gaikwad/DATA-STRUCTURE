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
	}int x,pos,flag=0;
	cout<<"Enter element to be insert\n";
	cin>>x;
	for(int i=0;i<n;i++){
		if(a[i]>x){
			pos = i;
			flag =1;
			break;
		}
	}
	for(int i=n;i>=pos;i--){
		a[i]=a[i-1];
	}
	n = n+1;
	a[pos]=x;
	cout<<"Array is\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
