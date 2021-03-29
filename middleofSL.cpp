#include<iostream>
using namespace std;

struct node{
	float data;
	node* next;
};

node* insert(node* head,float a){
	node* tmp=new node();
	tmp->data=a;
	tmp->next=head;
	head=tmp;
	return head;
}

void middle(node* head,int size){
	
	node* ptr=head;
	float avg=0.0;
	if(size%2==0){
		
		int i=0;
		while(i<(size/2)-1){
			ptr=ptr->next;
			i++;
		}
		avg=(ptr->data+ptr->next->data)/2;
		cout<<"Average : "<<avg<<" "<<endl;
	}else{
	    int i=0;
		while(i<(size/2)){
		    ptr=ptr->next;
			i++;
	}cout<<"Middle Element : "<<ptr->data<<" "<<endl;
	}
}

void disp(node* head){
	
	node* tmp=head;
	while(tmp!=NULL){
		cout<<tmp->data<<" ";
		tmp=tmp->next;
	}
	cout<<endl;
}

int main()
{
	node* head=NULL;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		float x;cin>>x;
		head=insert(head,x);
	}
	//disp(head);
	middle(head,n);
}
