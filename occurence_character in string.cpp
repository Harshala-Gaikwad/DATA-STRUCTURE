#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str1[50],s;int count =0;
	cout<<"Enter the string :";
	cin>>str1;
	cout<<"Enter character :";
	cin>>s;
	for(int i=0;i<strlen(str1);i++){
		if(str1[i]==s){
			count++;
		}
	}cout<<count<<endl;
}
