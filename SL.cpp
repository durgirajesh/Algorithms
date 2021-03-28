#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

node* insert(node* head,int a){
	
	node* tmp=new node();
	tmp->data=a;
	tmp->next=head;
	head=tmp;
	return head;
}

void display(node* head){
	
	node* tmp=head;
	while(tmp!=NULL){
		cout<<tmp->data<<"  ";
		tmp=tmp->next;
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
	
	display(head);
	return 0;
}
