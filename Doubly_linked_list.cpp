#include<iostream>
using namespace std;

struct node{
	int data;
	node* prev;
	node* next;
};

node* insert(node* head,int a)
{
	node* tmp=new node();
	tmp->data=a;
	if(head==NULL)
	{
		tmp->prev=NULL;
		tmp->next=head;
		head=tmp;
	}
	else
	{
		head->prev=tmp;
		tmp->next=head;
		tmp->prev=NULL;
		head=tmp;
	}
	return head;
}

node* insert1(node* head,int a,int n)
{
	node* ptr=head;
	node* tmp=new node();
	tmp->data=a;
	if(n==1)
	{
		tmp->prev=NULL;
		head->prev=tmp;
		tmp->next=head;
		head=tmp;
	}
	else
	{
		int i=2;
		while(i<n)
		{
			ptr=ptr->next;
			i++;
		}
		tmp->prev=ptr;
		tmp->next=ptr->next;
		ptr->next->prev=tmp;
		ptr->next=tmp;
		tmp=ptr;
	}
	return head;
}

node* display(node* head)
{
	node* ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<endl;
	return head;

}

void reverse(node* head)
{
	node* ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->prev;
	}
	cout<<endl;
}

int main()
{
	node* head=NULL;
	int n,x;cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		head=insert(head,x);
	}
	head=display(head);
	reverse(head);
	int x2,n1;cin>>x2>>n1;
	head=insert1(head,x2,n1);
	display(head);
	reverse(head);
	return 0;
}
