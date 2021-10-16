#include<iostream>
using namespace std;

class employee{
	public :
		static string manager;
		
		static void calc(){
			cout<<"This is static function";
		}
	protected:
		int salary;
};

string employee :: manager = "Dell";

class programmer : private employee{
	public :
		int bonus;
		
		void set(int s){
			salary = s;
		}
		
		int get();
};

int programmer :: get(){
	return salary + bonus;
}

int main()
{
	employee :: calc();
	
	
	programmer p1;
	p1.bonus = 2000;
	//p1.salary=11000; // Error - salary is protected, so in derived class protected data members become protected from base class.
	p1.set(10000);
	cout<<p1.get();
	
	return 0;
}
