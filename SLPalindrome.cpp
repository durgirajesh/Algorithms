#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};

node* insert(node* head,int d){
	node* tmp=new node();
	tmp->data=d;
	tmp->next=head;
	head=tmp;
	return head;
}

bool palindrome(node* head)
{
	node* ptr=head;
	stack<int>st;
	while(ptr!=NULL){
		st.push(ptr->data);
		ptr=ptr->next;
	}
	
	node* tmp=head;
	while(tmp!=NULL){
		if(tmp->data==st.top()){
			st.pop();
		}
		tmp=tmp->next;
	}
	return(st.empty());
}

void dis(node* head){
	node*tmp=head;
	while(tmp!=NULL){
		cout<<tmp->data<<" ";
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
	dis(head);
	cout<<palindrome(head);
	return 0;
}
