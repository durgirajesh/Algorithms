#include<bits/stdc++.h>
using namespace std;

class demo{
	public :
		int id; string st;
		string manager;
		
		demo(){
			cout<<"Demo";
		}
		
		demo(int a,string s){
			id=a;
			st=s;
		}
		
		demo(int z,string q, string m);
};

demo :: demo(int a,string b,string c){
	id = a; st = b; manager = c;
}

int main(){
	demo d1;
	
	demo d2(2,"Dell");
	cout<<d2.id<<" "<<d2.st<<" ";
	
	demo d3(3,"Mi","Xiomi");
	cout<<d3.id<<" "<<d3.st<<" "<<d3.manager<<" ";
	
	return 0;
}
