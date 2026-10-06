#include<iostream>
#include<vector>
using namespace std;

// Adjacency List Representation of Graph
int main(){
    int vertex;
    int edges;
    cout<<"Enter the number of vertices: ";
    cin>>vertex;
    cout<<"Enter the number of edges: ";
    cin>>edges;

    vector<int> adjacency[vertex];
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adjacency[u].push_back(v);
        adjacency[v].push_back(u);
    }

    cout<<"Adjacency List: "<<endl;
    for(int i=0;i<vertex;i++){
        cout<<"Adjacency List of vertex "<<i<<" -> ";
        for(int j=0;j<adjacency[i].size();j++){
            cout<<adjacency[i][j]<<" ";
        }
        cout<<endl;
    }
}