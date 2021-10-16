#include<iostream>
using namespace std;

/*
public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class -  It is possible to access private members of a class using a 
public method inside the same class - Encapsulation
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
*/

/*
By default, all members of a class are private if you don't specify an access specifier:
*/

class demo{
	int x, y;
	protected :
		string st;
};

class child : public demo{
	public :
	void set(string s){
		st = s;
	}
	string get(){
		return st;
	}
};

int main(){
	demo d1;
	//d1.x = 2;
	//cout<<d1.x<<" "; // Error
	//d1.st="rajesh"; // error
	
	child c1;
	//c1.st="rajesh"; // Error
	c1.set("rajesh");
	cout<<c1.get();
}




