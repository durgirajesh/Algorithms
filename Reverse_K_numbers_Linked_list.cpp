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

node* reverse(node* head,int n)
{
	node* ptr=head;
	int i=0;
	stack<int>s;
	while(i<n)
	{
		s.push(ptr->data);
		ptr=ptr->next;
		i++;
	}
	head=ptr;
	int d=s.size();
	for(int i=0;i<d;i++)
	{
		cout<<s.top()<<"->";
		s.pop();
	}
	return head;
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
	int n2;cin>>n2;
	head=reverse(head,n2);
	display(head);
	return 0;
}
