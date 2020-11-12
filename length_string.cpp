#include<iostream>
using namespace std;
int main(){
    char a[20];
    cout<<"Enter string : ";
    gets(a);int count =0;
    for(int i=0;a[i]!='\0';++i){
    	count++;
	}
	cout<<"Length of string is "<<count<<endl;
	return 0;
}
