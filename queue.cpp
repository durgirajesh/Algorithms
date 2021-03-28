#include<iostream>
#define max 1000
using namespace std;

class queue{
	
	public :
	int arr[max];
	int rear=0,front=0;
	
	void enqueue(int x){
		
		if(front==max-1){
			cout<<"Queue overflow";
		}else{
			arr[front]=x;
			front++;
		}
	}
	
	void dequeue(){
	    rear++;
	}
	
	bool isempty(){
		return (front==0 && rear==0);
	}
	
	void display(){
		
		for(int i=rear;i<front;i++){
			cout<<arr[i]<<" "<<endl;
		}
	}
	
};

int main()
{
	int n;
	cin>>n;
	
	queue Q1;
	
	for(int i=0;i<n;i++){
		int q;cin>>q;
		Q1.enqueue(q);
	}
	
	Q1.display();
	Q1.dequeue();
	Q1.display();
	
	return 0;
}
