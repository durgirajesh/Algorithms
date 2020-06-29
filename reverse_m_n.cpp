#include<iostream>
#include<stack>
using namespace std;

struct node{
	int data;
	node* next;
};

node* insert(node* head,int a)
{
	node* tmp=new node();
	tmp->data=a;
	tmp->next=head;
	head=tmp;
	return tmp;
}

void display(node* head)
{
	node* tmp=head;
	while(tmp!=NULL)
	{
		cout<<tmp->data<<"->";
		tmp=tmp->next;
	}
	cout<<endl;
}

node* reverse(node* head,int m,int n)
{
	stack<int>s;
	node* tmp=head;
	int i=1;
	while(i<m)
	{
		cout<<tmp->data<<"->";
		tmp=tmp->next;
		i++;
	}
	for(int i=m;i<=n;i++)
	{
		s.push(tmp->data);
		tmp=tmp->next;
	}
	head=tmp;
	int x=s.size();
	for(int i=0;i<x;i++)
	{
		cout<<s.top()<<"->";
		s.pop();
	}
	return head;
}

int main()
{
	node* head=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		head=insert(head,x);
	}
	display(head);
	int m,n1;
	cin>>m>>n1;
	head=reverse(head,m,n1);
	display(head);
	return 0;
}
