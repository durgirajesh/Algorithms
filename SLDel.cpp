#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

struct linked{
	
	public :
		
		node* insert(node* head,int a){
			
			node* tmp=new node();
			tmp->data=a;
			tmp->next=head;
			head=tmp;
			return head;
		}
		
		node* del(node* head){
			head=head->next;
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
	int n;cin>>n;
	linked l1;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		head=l1.insert(head,x);
	}
	l1.display(head);
	head=l1.del(head);
	head=l1.del(head);
	l1.display(head);
	return 0;
}
