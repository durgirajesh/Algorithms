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
	return tmp;
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

node* insert1(node* head,int b,int n)
{
	node* ptr=head;
	node* tmp=new node();
	tmp->data=b;
	if(n==1)
	{
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
		tmp->next=ptr->next;
		ptr->next=tmp;
		tmp=ptr;
   }
   return head;
}

int main()
{
	node* head=NULL;
	int a[6]={2,4,3,6,43,5};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		head=insert(head,a[i]);
	}
	display(head);
	int n1,b;cin>>b>>n1;
	head=insert1(head,b,n1);
	display(head);
	return 0;
}


