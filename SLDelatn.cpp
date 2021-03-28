#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

node* insert(node** head,int a){
	
	node* tmp=new node();
	tmp->data=a;
	tmp->next=*head;
	*head=tmp;
}

void display(node* head){
	node* tmp=head;
	while(tmp!=NULL){
		cout<<tmp->data<<" ";
		tmp=tmp->next;
	}
	cout<<endl;
}

node* del(node* head,int pos){
	
	node* ptr=head;
	if(pos==1){
		head=head->next;
	}else{
		int i=2;
		while(i<pos){
			i++;
			ptr=ptr->next;
		}
		ptr->next=ptr->next->next;
	}
	return head;
}

int main()
{
	node* head=NULL;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		insert(&head,x);
	}
	display(head);
	head=del(head,1);
	head=del(head,2);
	head=del(head,3);
	display(head);
	return 0;
}
