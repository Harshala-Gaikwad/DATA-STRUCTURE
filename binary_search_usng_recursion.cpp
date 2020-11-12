#include<iostream>
using namespace std;
int Binary_Search(int a[],int beg,int end,int x){
	if(beg<=end){
	int mid = int((beg+end)/2);
	if(a[mid]==x){
		return mid;
	}
	else{
		if(a[mid]<x){
			return Binary_Search(a,mid+1,end,x);
		}
		else{
		   return Binary_Search(a,beg,mid-1,x);
		}
	}
}
else{
	return -1;
}
}
int main(){
	int n;
	cout<<"Enter size\n";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x,result;
	cout<<"Enter element to be searched\n";
	cin>>x;
	result = Binary_Search(a,0,n,x);
	if(result==-1){
		cout<<"Element not found\n";
	}
	else{
		cout<<"Element found\n";
	}
}
