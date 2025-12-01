//Write a program to perform DFS traversal on a graph.
#include <iostream>
#include <vector>
using namespace std;
void dfsUtil(int node,vector<int> adj[],vector<bool>& visited){
    visited[node]=true;
    cout<<node<<" ";
    for(int neighbor:adj[node]){
        if(!visited[neighbor]){
            dfsUtil(neighbor,adj,visited);
        }
    }
}
void dfs(int start,vector<int> adj[],int vertices){
    vector<bool> visited(vertices,false);
    cout<<"DFS Traversal: ";
    dfsUtil(start,adj,visited);
    cout<<"\n";
}
int main(){
    int vertices,edges;
    cout<<"Enter number of vertices: ";
    cin>>vertices;
    vector<int> adj[100];
    cout<<"Enter number of edges: ";
    cin>>edges;
    cout<<"Enter edges (u v):\n";
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int start;
    cout<<"Enter starting node: ";
    cin>>start;
    dfs(start,adj,vertices);
    return 0;
}
