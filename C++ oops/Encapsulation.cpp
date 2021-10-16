#include<iostream>
using namespace std;

/* Encapsulation is to make sure that sensitive data is hidden from the users. To achieve this we must declare the attributes or variables as 
private and can be accessed by declaring public methods like set and get
*/

class demo{
	private :
		string employee;
		
	public :
		void set(string st){
			employee = st;
		}
		
		string get(){
			return employee;
		}
};

int main()
{
	demo d1;
	d1.set("Rajesh");
	cout<<d1.get();
	
	return 0;
}
