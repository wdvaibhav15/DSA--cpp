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

    int u, v;

    // Undirected, Unweighted Graph
    vector<vector<int>> adjacency(vertex, vector<int>(vertex, 0));

    for (int i = 0; i < edges; i++) {
        cin >> u >> v;

        // Add edge to the graph
        adjacency[u][v] = 1;
        adjacency[v][u] = 1;
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