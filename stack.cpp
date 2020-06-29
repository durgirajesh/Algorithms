#include<iostream>
#include<stack>
using namespace std;

struct node{
	int data;
	node* next;
};


node* insert(node** head,int a)
{
	node* tmp=new node();
	tmp->data=a;
	tmp->next=*head;
	*head=tmp;
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

void sortedInsert(stack<int> &stack, int key)
{
    if (stack.empty() || key > stack.top())
    {
        stack.push(key);
        return;
    }
    int top = stack.top();
    stack.pop();
    sortedInsert(stack, key);
    stack.push(top);
}

void sortstack(stack<int> &stack)
{
    if (stack.empty()) {
        return;
    }
    int top = stack.top();
    stack.pop();
    sortstack(stack);
    sortedInsert(stack, top);
}

void printStack(stack<int> stack)
{
    while (!stack.empty())
    {
        cout << stack.top() <<  " ";
        stack.pop();
    }
    cout << '\n';
}

node* greaternode(node* head)
{
	node* ptr=head;
	stack<int>stack;
	while(ptr!=NULL)
	{
		node* ptr1=ptr->next;
		while(ptr1!=NULL)
		{
			stack.push(ptr1->data);
			ptr1=ptr1->next;
		}
		sortstack(stack);
		int d=stack.top();
		if(ptr->data < d)
		{
			ptr->data=d;
		}
		else
		{
			ptr->data=0;
		}
		ptr=ptr->next;
		for(int i=0;i<stack.size();i++)
		{
			stack.pop();
		}
	}
	return head;
}

int main()
{ 
	node* head=NULL;
	int n,a[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		head=insert(&head,a[i]);
	}
	display(head);
	head=greaternode(head);
	display(head);
}
