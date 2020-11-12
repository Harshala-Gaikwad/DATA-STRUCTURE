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
	int x,beg =0,end = n-1,mid,flag=0;
	cout<<"Enter the elements to be search :\n";
	cin>>x;
	while(beg<=end){
		mid = int((beg+end)/2);
		if(a[mid]==x){
			cout<<"Element found.\n";
			flag=1;
			break;
		}
		else if(a[mid]<x){
			beg = mid+1;
		}
		else{
			end = mid-1;
		}
	
	}if(flag==0){
		cout<<"Element not found\n";
	}
}
