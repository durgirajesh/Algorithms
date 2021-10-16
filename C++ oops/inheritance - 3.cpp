#include<iostream>
using namespace std;

// Multiple Inheritance

class A{
	public :
		void pr(){
			cout<<"Parent 1";
		}
};

class B{
	public :
		void pri(){
			cout<<"Parent 2";
		}
};

class c : public A, public B{
	public :
		void dis(){
			cout<<"Child";
		}
};

int main(){
	c c1;
	c1.dis();
	c1.pr();
	c1.pri();
	
	return 0;
}
