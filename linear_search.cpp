#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array :\n";
	cin>>n;
	int a[n];
	cout<<"Enter the elements : \n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x,flag=0,pos;
	cout<<"Enter the elements to be search :\n";
	cin>>x;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			flag =1;
			pos =i;
			break;
		}
	}
    if(flag==1){
    	cout<<"element found at index :"<<pos;
	}
	else{
		cout<<"Element not found .";
	}
}
