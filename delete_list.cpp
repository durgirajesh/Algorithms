#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

node* insert(node* head,int a)
{
	node* tmp= new node;
	tmp->data=a;
	tmp->next=head;
	head=tmp;
	return tmp;
}

node* r2(node* head,int n,int n1)
{
	node* ptr=head;
	node* tmp=head->next;
	if(n==1)
	{
		head=head->next;
		return head;
	}
	else
	{
		int i=2;
		while(i<n)
		{
			ptr=ptr->next;
			tmp=tmp->next;
			i++;
		}
		ptr->next=tmp->next;
		ptr=tmp;
	}
	return head;
}

int display(node* head)
{
	int n=0;
	node* ptr=head;
	while(ptr!=NULL)
	{
		n++;
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
	return n;
}

int main()
{
	node* head=NULL;
	int n;cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		head=insert(head,x);
	}
	int d=display(head);
	int n1;cin>>n1;
	head=r2(head,n1,d);
	display(head);
	return 0;
}
