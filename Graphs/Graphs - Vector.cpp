/*
Graph implementation using Adjacency List 
(i) Using Ajacency Vector
*/

#include<bits/stdc++.h>
using namespace std;

class Graph{
	public :
		int V;
	    Graph(int V){
		    this->V = V;
		}
		
		void addEdge(vector<int> adj[],int u,int v){
			adj[u].push_back(v);
		}
		
		void print(vector<int>adj[],int v){
			for(int i=0;i<v;i++){
				cout<<i<<" ";
				for(auto x : adj[i]){
					cout<<"->"<<x;
				}
				cout<<endl;
			}
		}
};

int main()
{
	int numberofvertices = 4;
	vector<int> adj[numberofvertices];
	Graph g(numberofvertices);
	g.addEdge(adj,0,1);
	g.addEdge(adj,0,1);
	g.addEdge(adj,1,2);
	g.addEdge(adj,2,0);
	g.addEdge(adj,2,3);
	g.addEdge(adj,3,3);
	
	g.print(adj,numberofvertices);
}

