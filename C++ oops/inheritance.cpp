#include<iostream>
using namespace std;
// Single Level Inheritance


class vehicle{
	public :
		string brand = "ford";
		void honk(){
			cout<<"Tuut";
		}
};

class car : public vehicle{
	public :
		string model = "Mustang";
};

int main()
{
	car c1;
	c1.honk();
	cout<<c1.brand<<" "<<c1.model<<" ";
}
