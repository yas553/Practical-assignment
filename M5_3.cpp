//Write a program to perform BFS traversal on a graph.
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(int start,vector<int> adj[],int vertices){
    vector<bool> visited(vertices,false);
    queue<int> q;
    visited[start]=true;
    q.push(start);
    cout<<"BFS Traversal: ";
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int neighbor:adj[node]){
            if(!visited[neighbor]){
                visited[neighbor]=true;
                q.push(neighbor);
            }
        }
    }
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
    bfs(start,adj,vertices);
    return 0;
}