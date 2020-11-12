#include<iostream>
using namespace std;
struct node{
	int info;
	node *left,*right;
};struct node *root=NULL;
void insert(int x){
	node *NN = new(node);
	NN->info=x;
	NN->left=NULL;
	NN->right=NULL;
	if(root==NULL){
		root=NN; 
	}
	else{
		node *p=root,*q=root;
		while(p!=NULL){
			if(p->info>NN->info){
				q=p;
				p=p->left;
			}
			else{
				q=p;p=p->right;
			}
		}
		if(q->info>NN->info){
			q->left=NN;
		}
		else{
			q->right=NN;
		}
	}
}
void delete(int x){
	if(root==NULL){
		return root;
	}
	else{
		int *p1=root;
		while(p1->info!=x){
			if(x>p1){
				p1 = p1->right;
			}
			else{
				p1=p1->left;
			}
		}
		
	}
}
