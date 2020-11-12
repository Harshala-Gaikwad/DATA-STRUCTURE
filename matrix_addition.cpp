#include<iostream>
using namespace std;


int main(){
   int m1,n1,m2,n2;
   cout<<"Enter dimension of 1st matrix\n";
   cin>>m1>>n1;
   cout<<"Enter dimension of 2nd matrix\n";
   cin>>m2>>n2;
   if(m1==m2&&n1==n2&&m1==n1){
   	   int a[m1][n1],b[m1][n1],c[m1][n1];
   	   for(int i=0;i<m1;i++){
   	   	    for(int j=0;j<n1;j++){
   	   	    	cin>>a[i][j];
				  }
		  }
		  for(int i=0;i<m1;i++){
   	   	    for(int j=0;j<n1;j++){
   	   	    	cin>>b[i][j];
				  }
		  }
		  for(int i=0;i<m1;i++){
		  	for(int j=0;j<n1;j++){
		  		c[i][j]=a[i][j]+b[i][j];
			  }
		  }
		  for(int i=0;i<m1;i++){
   	   	    for(int j=0;j<n1;j++){
   	   	    	cout<<c[i][j];
				  }
		  }
   }
	return 0;
}
