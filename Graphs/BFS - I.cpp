#include<bits/stdc++.h>
using namespace std;

class Graph{
	int V;
	list<int> *adj;
	public :
		Graph(int V){
		    this->V = V;
			adj = new list<int>[V];
		}
		void addEdge(int u,int v){
		    adj[u].push_back(v);
		}
		
		void BFS(int s){
			list<int> queue;
			bool *visited = new bool[V];
			for(int i=0;i<V;i++){
				visited[i] = false;
			}
			
			queue.push_back(s);
			visited[s] = true;
			list<int> :: iterator i;
			
			while(!queue.empty()){
				s = queue.front();
				cout<<s<<" ";
				queue.pop_front();
				
				for(i=adj[s].begin();i!=adj[s].end();i++){
					if(!visited[*i]){
						visited[*i] = true;
						queue.push_back(*i);
					}
				}
			}
		}
};

int main(){
	
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	
	g.BFS(2);
}
