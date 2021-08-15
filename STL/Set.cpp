#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	set<int> s;
	set<int> :: iterator it;
	s.insert(4);
	s.insert(3);
	s.insert(5);
	s.insert(2);
	
	/*
	int n; cin>>n;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		s.insert(x);
	}
	*/
	for(it=s.begin();it!=s.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	for(auto x:s){
		cout<<x<<" ";
	}
	cout<<endl;
	auto po=s.find(5);
	s.erase(po);
	
	if(!s.count(5)){
		cout<<"5 is not present"<<endl;
	}
	
	cout<<s.size()<<endl;
	if(!s.empty()){
		cout<<"1-->true"<<endl;
	}
	s.insert(5);
	auto pos=s.find(2);
	for(it=pos;it!=s.end();it++){
		cout<<*it<<endl;
	}
	
	s.clear();
	cout<<s.size()<<endl;
	
	
}
