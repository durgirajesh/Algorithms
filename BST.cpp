#include<iostream>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
};

node* getnode(int k){
	
	node* tmp=new node();
	tmp->data=k;
	tmp->left=NULL;
	tmp->right=NULL;
	return tmp;
}

node* insert(node* root,int k)
{
	if(root==NULL){
		return getnode(k);
	}
	else if(k < root->data){
		root->left=insert(root->left,k);
	}
	else if(k > root->data){
		root->right=insert(root->right,k);
	}
	return root;
}

void inorder(node* root)
{
	if(root!=NULL){
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);		
	}

}

int main()
{
	node* root=NULL;

	root=insert(root,1);
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		insert(root,x);
	}
	inorder(root);
}
