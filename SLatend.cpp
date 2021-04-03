#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

node* insert(node* head,int d)
{
	node* tmp=new node();
	tmp->data=d;
	node* ptr=head;
	
	if(head==NULL){
		tmp->next=head;
		head=tmp;
	}else{
		
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=tmp;
		tmp->next=NULL;
	}
	return head;
}

void dis(node* head)
{
	node* ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
}

int main()
{
	node* head=NULL;
	
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		head=insert(head,x);
	}
	dis(head);
}
