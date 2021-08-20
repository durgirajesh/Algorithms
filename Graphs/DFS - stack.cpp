#include<bits/stdc++.h>
using namespace std;

class Graph{
	int V;
	list<int> *adj;
	
	public :
	Graph(int V){
		this->V=V;
		adj=new list<int>[V];
	}
	
	void addEdge(int u,int v){
		adj[u].push_back(v);
	}
	
	void dfs(int s){
		vector<bool> visited(V,false);
		stack<int> st;
		
		st.push(s);
		while(!st.empty()){
			s = st.top();
			st.pop();
			
			if(!visited[s]){
				cout<<s<<" ";
				visited[s] = true;
			}
			for(auto it=adj[s].begin();it!=adj[s].end();it++){
				if(!visited[*it]){
					st.push(*it);
				}
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
