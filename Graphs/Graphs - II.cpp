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
		
		// Prints BFS Traversal from a given source s
		vector<int> BFS(int s){
			vector<int> bfs;
			//mark all vertices as not visited
			bool* visited = new bool[V];
			for(int i=0;i<V;i++){
				visited[i] = false;
			}
			
			//create a queue for BFS
			list<int> queue;
			visited[s]=true;
			queue.push_back(s);
			
			list<int> :: iterator i;
			while(!queue.empty()){
				s = queue.front();
				bfs.push_back(s);
				queue.pop_front();
				
				for(i=adj[s].begin();i!=adj[s].end();i++){
					if(!visited[*i]){
						visited[*i] = true;
						queue.push_back(*i);
					}
				}
			}
			return bfs;
		}
		
		void print(vector<int> v){
			for(int i=0;i<v.size();i++){
				cout<<v[i]<<" ";
			}
		}
};

int main()
{
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	
	cout<<"BFS : ";
	vector<int> vec = g.BFS(2);
	g.print(vec);
}

