#include<bits/stdc++.h>
using namespace std;

class Graph{
	int v;
	list<int> *adj;
	map<int,bool> visited;
	public :
	Graph(int v){
		this->v=v;
		adj=new list<int>[v];
	}
	
	void addEdge(int u,int v){
		adj[u].push_back(v);
	}
	
	void dfs(int s){
		visited[s]=true;
		cout<<s<<" ";
		
		list<int> ::iterator it;
		for(it=adj[s].begin();it!=adj[s].end();it++){
			if(!visited[*it]){
				dfs(*it);
			}
		}
	}
};

int main()
{
	Graph g(4);
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    
    g.dfs(2);
}
