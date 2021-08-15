#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
	int val;
	node *left, *right;
};

class BST{
	public :
	    
		node* getnode(int x){
	        node* tmp = new node();
	        tmp->val = x;
	        tmp->left = tmp->right = NULL;
	        return tmp;
	    }
	    
	    node* insert(node* root,int data)
		{
		    if(root==NULL){
		        return getnode(data);
	        }
			if(data > root->val){
			    root->right = insert(root->right,data);
			}
			else if(data < root->val){
			    root->left = insert(root->left,data);
			}
			return root;
		}
		
		node* search(node* root,int key){
			if(root==NULL || root->val == key){
				return root;
			}
			
			if(key < root->val){
				return root->left = search(root->left,key);
			}
			else if(key > root->val){
				return 
				root->right = search(root->right,key);
			}
		}
};

class Delete{
	private :
	    string str;
	    int num;
	public:
		
		Delete(string str,int num){
			this->str = str;
			this->num = num;
			cout<<str<<num<<endl;
		}
		
		node* minvalue(node* root){
			node* tmp = root;
			while(tmp && tmp->left!=NULL){
				tmp = tmp->left;
			}
			return tmp;
		}
		
		node* remove(node* root,int key){
			if(!root){
				return NULL;
			}
			
			if(key < root->val){
				root->left = remove(root->left,key);
			}else if(key > root->val)
			{
				root->right = remove(root->right,key);
			}
			else{
				if(root->left==NULL && root->right==NULL){
					return NULL;
				}
				else if(root->left==NULL){
					node* tmp = root->right;
					root=root->left;
					return tmp;
				}
				else if(root->right==NULL){
					node* tmp = root->left;
					root=root->right;
					return tmp;
				}
				node* tp = minvalue(root->right);
				root->val = tp->val;
				root->right = remove(root->right,tp->val);
			}
			return root;
		}
};

/*
Breadth First Traversal - Level Order Traversal
Depth First Traversal - Preorder, Postorder, Inorder Traversals.
*/

class BFS{
	private :
		string s;
	public :
		
		BFS(string s){
			this->s = s;
			cout<<s<<endl; 
		}
		
		void levelorder(node* root){
			queue<node*> q;
			q.push(root);
			while(!q.empty()){
				node* tmp = q.front();
				cout<<tmp->val<<" ";
				q.pop();
				
				if(tmp->left!=NULL){
					q.push(tmp->left);
				}
				if(tmp->right!=NULL){
					q.push(tmp->right);
				}
			}
		}
};

class DFS{
	private : 
	    string s;
	public :
		
		DFS(string str){
			this->s = str;
			cout<<s<<endl;
		}
		void preorder(node* root){
			if(root!=NULL){
				cout<<root->val<<" ";
				preorder(root->left);
				preorder(root->right);
			}
		}
		void inorder(node* root);
		void postorder(node* root){
			if(root!=NULL){
				postorder(root->left);
				postorder(root->right);
				cout<<root->val<<" ";
			}
		}
};

void DFS :: inorder(node* root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->val<<" ";
		inorder(root->right);
	}
}

int main()
{
	BST bst;
	node* root = NULL;
	
	cout<<"Enter root : ";
	int key; cin>>key;
	root = bst.insert(root,key);
	
	for(int i=0;i<4;i++){
		cout<<"Enter node : ";
		int x; cin>>x;
		bst.insert(root,x);
	}
	
	DFS dfs("DFS Traversals : ");
	dfs.inorder(root); cout<<endl;
	dfs.postorder(root); cout<<endl;
	dfs.preorder(root); cout<<endl;
	
	BFS bfs("BFS Traversal : ");
	bfs.levelorder(root); cout<<endl;
	
	cout<<"Enter node to search : "; 
	int ele; cin>>ele;
	node* tp=bst.search(root,ele);
	cout<<tp->val<<endl;
	
	int k; cin>>k;
	Delete DL("BST Deletion : ",k);
	root = DL.remove(root,k);
	
	BFS bf("Level Order : ");
	bf.levelorder(root);
	
	return 0;
}
