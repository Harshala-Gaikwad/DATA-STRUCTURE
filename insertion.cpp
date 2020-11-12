#include<iostream>
using namespace std;
void Insertion_Sort(int n,int a[]){
	int temp,j;
	for(int i=1;i<n;i++){
	    temp = a[i];
	    j=i-1;
	    while(j>=0&& a[j]>temp){
			a[j+1]=a[j];
			j--;
		}a[j+1] = temp;
	}
}
int main(){
	int n;
	cout<<"\nEnter size of array\n";
	cin>>n;
	int a[n];
	cout<<"\nEnter elements\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	Insertion_Sort( n,a);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}
