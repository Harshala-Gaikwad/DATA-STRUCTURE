#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str1[20];
	char str2[20];
	cout<<"Enter string 1:";
	cin>>str1;
	cout<<"\nEnter string 2:";
	cin>>str2;
	strcat(str1,str2);
	cout<<"After concatinatng both string "<<str1;
}
