#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

class linked{
	
	public :
		node* insert(node* head,int a,int pos){
			
			node* tmp=new node();
			tmp->data=a;
			node* ptr=head;
			if(pos==1){
				tmp->next=head;
				head=tmp;
			}else
			{
				int i=2;
				while(i<pos){
					ptr=ptr->next;
					i++;
				}
				tmp->next=ptr->next;
				ptr->next=tmp;
				ptr=tmp;
			}
			return head;
		}
		
		void display(node* head){
			node* tmp=head;
			while(tmp!=NULL){
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
			cout<<endl;
		}
};

int main()
{
	node* head=NULL;
	linked l1;
	head=l1.insert(head,1,1);
	head=l1.insert(head,2,1);
	head=l1.insert(head,3,2);
	head=l1.insert(head,4,1);
	head=l1.insert(head,5,2);
	l1.display(head);
	return 0;
}
