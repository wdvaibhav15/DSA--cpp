#include <iostream>
#include <vector>
using namespace std;

// Adjacency Matrix Representation of Graph
int main() {
    int vertex;
    int edges;
    cout << "Enter the number of vertices: ";
    cin >> vertex;
    cout << "Enter the number of edges: ";
    cin >> edges;

    int u, v, w;

    // Undirected, Unweighted Graph
    vector<vector<int>> adjacency(vertex, vector<int>(vertex, 0));

    for (int i = 0; i < edges; i++) {
        cin >> u >> v >> w;

        // Add edge to the graph directed or not
        adjacency[u][v] = w; // from 1st to 2nd vertex weight is w
        adjacency[v][u] = w; // from 2nd to 1st vertex weight is w
    }

    // Print the graph
    cout << "Adjacency Matrix: " << endl;
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            cout << adjacency[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}