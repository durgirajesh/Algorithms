#include<iostream>
#include<vector>
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
}

void remove(node* head,int n)
{
	vector<int>v;
	node* tmp=head;
	while(tmp!=NULL)
	{
		if(tmp->data!=n)
		{
			v.push_back(tmp->data);
		}
		tmp=tmp->next;
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v.at(i)<<"->";
	}
}

int main()
{
	node* head=NULL;
	int n;;cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		head=insert(head,x);
	}
	display(head);
	int n1;cin>>n1;
	remove(head,n1);
	return 0;
}
