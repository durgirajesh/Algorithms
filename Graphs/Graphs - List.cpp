#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Graph{
	public :
	    int V; // Number of Vertices
	
	public :
	    list<int>*adj;
	// Pointer to an array containing adjacency lists
	
	public :
		Graph(int V){
		    this->V = V;
			adj = new list<int>[V];
		}
		
		void addEdge(int v,int w){
			adj[v].push_back(w);
		}
		
		void print(int V){
			list<int> ::iterator it;
			for(int i=0;i<V;i++){
				cout<<i<<" ";
				for(it=adj[i].begin();it!=adj[i].end();it++){
					cout<<"->"<<*it;
				}
				cout<<endl;
			}
		}
		
};

int main()
{
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	
	g.print(4);
}
