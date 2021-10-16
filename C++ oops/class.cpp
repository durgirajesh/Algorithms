#include<iostream>
using namespace std;

class demo{
	public :
		int id; string st;
};

class demo2{
	public :
		void mymethod(){
			cout<<"hey";
		}
		
		int add(int x,int y);
};

int demo2 :: add(int x,int y){
	return (x+y);
}

int main(){
	demo d1;
	d1.id = 2; d1.st="dell";
	
	cout<<d1.id<<" "<<d1.st<<" ";
	
	demo d2;
	d2.id = 3; d2.st = "Mi";
	
	cout<<d2.id<<" "<<d2.st<<" ";
	
	demo2 d3;
	d3.mymethod();
	
	cout<<d3.add(2,3);
}
