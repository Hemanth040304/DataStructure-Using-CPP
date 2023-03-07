#include<bits/stdc++.h>
using namespace std;

void BFS(int node,vector<int>adj[],vector<int>&vis){
	queue<int>Q;
	Q.push(node);
	vis[node]=1;
	while(!Q.empty()){
		node = Q.front();
		cout<<node<<" ";
		Q.pop();
		for(auto it:adj[node]){
			if(!vis[it]){
				Q.push(it);
				vis[it]=1;
			}
		}
	}
}

int main(){
	int N,E;
    cin>>N>>E;
	vector<int> adj[N+1];
    int u,v;
    for(int i = 0 ; i < E ; i++){
        cin>>u>>v;
        //undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);

        //directed graph
        adj[u].push_back(v);
    }
    vector<int>vis(N+1,0);
    for(int i = 1 ; i < N+1 ; i++){
        if(!vis[i])BFS(i,adj,vis);
    }
}