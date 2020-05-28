#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

node* sort(node* head)
{
	node* ptr=head;
	while(ptr->next!=NULL)
	{
		node* ptr1=head;
		while(ptr1->next!=NULL)
		{
			if(ptr1->data > ptr1->next->data)
			{
				int tmp=ptr1->data;
				ptr1->data=ptr1->next->data;
				ptr1->next->data=tmp;
				ptr1=ptr1->next;
			}
			else
			{
				ptr1=ptr1->next;
			}
		}
		ptr=ptr->next;
	}
	return head;
}

node* insert(node* head,int a)
{
	node* tmp=new node();
	tmp->data=a;
	tmp->next=head;
	head=tmp;
	return head;
}

void display(node* head)
{
	node* ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
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
	display(head);
	head=sort(head);
	display(head);
	cout<<"sorted !!";
	return 0;
}
