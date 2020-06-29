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

node* circular(node* head)
{
	node* ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=head;
	return head;
}

bool check(node* head)
{
	node* ptr=head->next;
	while(ptr!=NULL && ptr!=head)
	{
		ptr=ptr->next;
	}
	return (ptr==head);

}

void display1(node* head)
{
	node* ptr=head;
	do{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}while(ptr!=head);
}

int sum(node* head)
{
	node* ptr=head;
	int n=0;
	do{
		n+=ptr->data;
		ptr=ptr->next;
	}while(ptr!=head);
	return n;
	
}

node* dlte(node* head,int n)
{
	node* ptr=head;
	node* ptr1=head->next;
	if(n==1)
	{
		head=head->next;
	}
	else
	{
		int i=2;
		while(i<n)
		{
			ptr=ptr->next;
			ptr1=ptr1->next;
			i++;
		}
		ptr->next=ptr1->next;
		ptr1=ptr;
	}
	return head;
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
	head=circular(head);
	display1(head);
	
    check(head)? cout << "Yes\n" : 
                 cout << "No\n" ; 
     
	int n1=sum(head);
	cout<<n1<<" ";  
	
	int n2;cin>>n2;
	head=dlte(head,n2);
	display1(head);          
	return 0;
	
}
