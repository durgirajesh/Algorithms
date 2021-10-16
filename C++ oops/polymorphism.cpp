#include<iostream>
using namespace std;

// compile time => function overloading

class A{
	public :
		int add(int x,int y){
			return (x+y);
		}
		
		int add(int x,int y,int s){
			return (x+y+s);
		}
};

// Run time => method overriding
class B{
	public :
		virtual void print(){
			cout<<"Base class print";
		}
		
		void show(){
			cout<<"show base class";
		}
		
		virtual void display() = 0;
};

class C:public B{
	public :
		void print(){
			cout<<"Derived class print";
		}
		
		void show(){
			cout<<"Derived class show";
		}
		
		void display(){
			cout<<"pure virtual function is called";
		}
};

int main(){
	A a1;
	a1.add(2,3);
	a1.add(2,3,4);
	
	B *bpr;
	C c1;
	bpr = &c1;
	
	bpr->print();
	bpr->show();
	bpr->display();
	
	return 0;
}
