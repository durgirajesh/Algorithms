#include<iostream>
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
	return head;
}

void display(node* head)
{
	node* ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<endl;
}

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

node* merge(node* head1,node* head2)
{
	node* ptr=head1;
	while (ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=head2;
	ptr=head2;
	return head1;
}

int main()
{
	node* head1=NULL;
	node* head2=NULL;
	int n1,n2;cin>>n1>>n2;
	int x1,x2;
	for(int i=0;i<n1;i++)
	{
		cin>>x1;
		head1=insert(head1,x1);
	}
	for(int i=0;i<n2;i++)
	{
		cin>>x2;
		head2=insert(head2,x2);
	}
	display(head1);
	display(head2);
	head1=sort(head1);
	head2=sort(head2);
	display(head1);
	display(head2);
	head1=merge(head1,head2);
	display(head1);
	return 0;
}
