#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,E;
    cin>>N>>E;
    //2 ways to store the graph input
    // 1st one matrix means 2d array
    int matrix[N+1][N+1];
    int u,v;
    for(int i = 0 ; i < E ; i++){
        cin>>u>>v;
        matrix[u][v]=1;
        matrix[v][u]=1;
    }

    //2nd way adjucent list

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
}