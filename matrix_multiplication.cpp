#include<iostream>
using namespace std;
int main(){
	int m1,n1,m2,n2;
	cout<<"Enter dimensions of 1 matrix : \n";
	cin>>m1>>n1;
	cout<<"Enter dimensions of 2nd matrix : \n";
	cin>>m2>>n2;
	int a[m1][n1],b[m2][n2],c[n1][m2],sum;
	if(n1==m2){
		cout<<"Enter elementsof 1st matrix\n";
		for(int i=0;i<m1;i++){
			for(int j=0;j<n1;j++){
				cin>>a[i][j];
			}
		}cout<<"Enter elementsof 2nd matrix\n";
		for(int i=0;i<m1;i++){
			for(int j=0;j<n1;j++){
				cin>>b[i][j];
			}
		}
		for(int i=0;i<m1;i++){
			for(int j=0;j<n2;j++){
				for(int k=0;k<m2;k++){
					sum = sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
				sum=0;
			}
		}
		for(int i=0;i<n1;i++){
			for(int j=0;j<m2;j++){
				cout<<c[i][j]<<" ";
			}cout<<endl;
		}
	}
	else{
		cout<<"NOT POSSIBLE\n";
	}
}
