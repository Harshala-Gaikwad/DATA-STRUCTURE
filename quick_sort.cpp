#include<iostream>
using namespace std;
int Partition(int a[],int l,int r){
	int pivot,i,j;
	pivot = a[l];
	i= l+1;
	j=r;
	while(i<=j){
		while(pivot>=a[i]&& i<=r){
			i++;
		}
		while(pivot<a[j]&&j>=l){
			j--;
		}
		if(i<=j){
		int temp;
		temp = a[i];
		a[i]=a[j];
		a[j]=temp;
	}
		
	}
	
	
		int c;
		c = a[l];
		a[l]=a[j];
		a[j]=c;	
	return j;
}
void Quick_Sort(int a[],int l,int r){
	if(l<r){
		int p = Partition(a,l,r);
		Quick_Sort(a,l,p-1);
		Quick_Sort(a,p+1,r);
	}
}
int main(){
    int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		
		cin>>a[i];
	}
	Quick_Sort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;	
}
