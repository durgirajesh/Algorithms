
#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int> adj[],int u,int v){
	
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
           cout << "-> " << x;
        printf("\n");
    }
}


int main()
{
	int v=5;
	vector<int>adj[v];
	
	for(int i=0;i<7;i++){
		int x,y;cin>>x>>y;
		addedge(adj,x,y);
	}
	printGraph(adj,v);
}