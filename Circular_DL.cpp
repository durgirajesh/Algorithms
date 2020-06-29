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

node* circular(node* head)
{
	node* ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=head;
	head->prev=ptr;
	ptr=head;
	return head;
}

bool check(node* head)
{
	node* ptr=head->next;
	while( ptr!=NULL && ptr!=head)
	{
		ptr=ptr->next;
	}
	return (ptr==head);
}

node* insert1(node* head,int a,int n)
{
	node* tmp=new node();
	tmp->data=a;
	if(n==1)
	{
		tmp->prev=head->prev;
		head->prev->next=tmp;
		tmp->next=head;
		head->prev=tmp;
		head=tmp;
	}
	else
	{
		node* ptr=head;
		int i=2;
		while(i<n)
		{
			ptr=ptr->next;
			i++;
		}
		tmp->next=ptr->next;
		tmp->prev=ptr;
		ptr->next->prev=tmp;
		ptr->next=tmp;
		ptr=tmp;
	}
	return head;
}

void display1(node* head)
{
	node* ptr=head;
	do{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}while(ptr!=head );
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
	int d=display(head);
	head=circular(head);
	check(head)? cout << "Yes\n" : 
                 cout << "No\n" ;
    display1(head);             
	int n2,x2;cin>>x2>>n2;			 
	head=insert1(head,x2,n2);	
	display1(head);	
	check(head)? cout << "Yes\n" : 
                 cout << "No\n" ;  
	return 0;
}
