#include<iostream>
#define MAX 1000
using namespace std;

class stack{
	public : 
	
	int arr[MAX];
	int top=-1;
	
	void push(int x){
		if(top==MAX-1){
			cout<<"Stack OverFlow";
		}else{
			top++;
			arr[top]=x;
		}
	}
	
	void pop(){
		
		if(top==-1){
			cout<<"Stack UnderFlow";
		}else{
			top--;
		}
	}
	
	void isempty(){
		if(top==-1){
			cout<<"Stack is Empty";
		}else{
			cout<<"Not Empty"<<endl;
		}
	}
	
	void display(){
		for(int i=0;i<=top;i++){
			cout<<arr[i]<<" "<<endl;
		}
	}
	
};

int main()
{
	int n;cin>>n;
	
	stack s1;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		s1.push(x);
	}
	s1.display();
	s1.pop();
	s1.isempty();
	s1.display();
	
	return 0;
}
