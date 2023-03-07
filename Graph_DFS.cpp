#include<bits/stdc++.h>
using namespace std;

void DFS(int node,vector<int>adj[] , vector<int>&vis){
    vis[node]=1;
    cout<<node<<" ";
    for(auto it:adj[node]){
        if(!vis[it]){
            DFS(it,adj,vis);
        }
    }
}

int main(){
    int N,E;
    cin>>N>>E;
    vector<int> adj[N+1];
    int u,v;
    for(int i = 0 ; i < E+1 ; i++){
        cin>>u>>v;
        //undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);

        //directed graph
        adj[u].push_back(v);
    }
    vector<int>vis(N+1,0);
    for(int i = 1 ; i < N+1 ; i++){
        if(!vis[i])DFS(i,adj,vis);
    }
}