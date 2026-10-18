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

    vector<pair<int,int> > adjacency[vertex];
    int u,v,w;
    for(int i=0;i<edges;i++){
        cin>>u>>v>>w;
        adjacency[u].push_back(make_pair(v,w));
        adjacency[v].push_back(make_pair(u,w));
    }

    cout<<"Adjacency List: "<<endl;
    for(int i=0;i<vertex;i++){
        cout<<"Adjacency List of vertex "<<i<<" -> ";
        for(int j=0;j<adjacency[i].size();j++){
            cout<<"("<<adjacency[i][j].first<<","<<adjacency[i][j].second<<") ";
        }
        cout<<endl;
    }
}