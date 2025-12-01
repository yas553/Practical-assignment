//Write a program to represent a graph using an adjacency list.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int vertices;
    cout<<"Enter number of vertices: ";
    cin>>vertices;
    vector<int> adj[100];
    int edges;
    cout<<"Enter number of edges: ";
    cin>>edges;
    cout<<"Enter edges (u v):\n";
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"Adjacency List:\n";
    for(int i=0;i<vertices;i++){
        cout<<i<<": ";
        for(int node:adj[i]){
            cout<<node<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
