#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Graph with 4 nodes
    int nodes = 4;
    vector<int> adjList[4];

    // Adding edges (undirected graph)
    adjList[0].push_back(1); // Edge 0 -> 1
    adjList[1].push_back(0); // Edge 1 -> 0
    adjList[1].push_back(2); // Edge 1 -> 2
    adjList[2].push_back(1); // Edge 2 -> 1
    adjList[2].push_back(3); // Edge 2 -> 3
    adjList[3].push_back(2); // Edge 3 -> 2

    // Printing adjacency list
    for (int i = 0; i < nodes; i++) {
        cout << "Node " << i << ": ";
        for (int neighbor : adjList[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
    return 0;
}
