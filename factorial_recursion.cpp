#include<iostream>
using namespace std;
int factorial(int n){
	int fac=1;
	if(n==0||n==1){
		return 1;
	}
	else{
		fac= n*factorial(n-1);
		return fac;
	}
}
int main(){
	int n;
	cout<<"Enter number\n";
	cin>>n;
	int f;
	cout<<"factorial is : "<<factorial(n);

	return 0;
}
