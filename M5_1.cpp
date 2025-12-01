//Write a program to represent a graph using an adjacency matrix.
#include <iostream>
using namespace std;
int main(){
    int vertices;
    cout<<"Enter number of vertices: ";
    cin>>vertices;
    int adj[100][100]={0};
    int edges;
    cout<<"Enter number of edges: ";
    cin>>edges;
    cout<<"Enter edges (u v):\n";
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    cout<<"Adjacency Matrix:\n";
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}