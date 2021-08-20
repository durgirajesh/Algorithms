#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Undirected Graph using Adjacency List

void addedge(vector<int> vec[],int u,int v){
	vec[u].push_back(v);
	vec[v].push_back(u);
}

void print(vector<int>vt[],int v){
	for(int i=0;i<v;i++){
		cout<<"head : "<<i;
		for(auto x : vt[i])
		{
			cout<<"->"<<x;
		}
		cout<<endl;
	}
}

int main()
{
	int v=5;
	vector<int> vec[v];
	addedge(vec,0,1);
	addedge(vec,0,4);
	addedge(vec,1,2);
	addedge(vec,1,3);
	addedge(vec,1,4);
	addedge(vec,2,3);
	addedge(vec,3,4);
	print(vec,v);
	
	return 0;
}
