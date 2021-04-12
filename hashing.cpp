#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Hash{
	
	int bucket;
	
	list<int> *table;
	
public :
	
	Hash(int V){
		this->bucket=V;
		table = new list<int>[bucket];
	}
	
	int hashfunction(int x){
		return (x%bucket);
	}
	
	void insert(int key){
		int indx=hashfunction(key);
		table[indx].push_back(key);
	}
	
	void display(){
		for(int i=0;i<bucket;i++){
			cout<<i;
			for(auto x : table[i]){
				cout<<"-->"<<x;
			}
			cout<<endl;
		}
	}

	void del(int key){
		int indx=hashfunction(key);
		list<int>::iterator i;
		for(i=table[indx].begin();i!=table[indx].end();i++){

			if(*i==key){
				break;
			}
		}
		if(i!=table[indx].end()){
			table[indx].erase(i);
		}
	}
};

int main()
{
	int arr[]={1,15,9,10,91};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	Hash h(7);
	for(int i=0;i<n;i++){
		h.insert(arr[i]);
	}
	h.display();

	h.del(91);
	h.display();

	return 0;
}
