#include<iostream>
using namespace std;

// Multilevel - Chain of constructors

class A{
	public :
		A(){ cout<<"Class A"; }
};

class B : public A{
	public :
		B() { cout<<"Class B";}
};

class C : public B{
	public :
		C() { cout<<"Class C"; }
};

int main(){
	C c1;
}
