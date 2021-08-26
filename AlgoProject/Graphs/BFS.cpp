/*
 C++ implementataion of Breadth First Search Traversal. In this implementation we consider it on directed graph.
*/

#include<iostream>
#include<map>
#include<list>
#include<queue>

using namespace std;

class Graph2 {
    map<int, bool> isVisited; // To check whether the node is visisted
    map<int, list<int>> adj; // node -> [list of directed nodes]

public:
    void addEdge(int from, int to); // Add an edge [from] node to [to] node
    void BFS(int source); // Compute BFS with source as the starting point
};

void Graph2::addEdge(int from, int to) {
    adj[from].push_back(to); // Add egde to the graph
}

void Graph2::BFS(int source) {
    // BFS QUEUE
    queue<int> bfsQueue;
    list<int>::iterator i; // List iterator for all the adjacent vertices

    // First maek that the source is visited
    isVisited[source] = true;
    bfsQueue.push(source);

    while (!bfsQueue.empty()) {
        int item = bfsQueue.front();
        cout << item << " ";
        bfsQueue.pop();

        for (i = adj[item].begin(); i != adj[item].end(); ++i) { // We push it so that level wise pushing happens
            if (!isVisited[*i]) {
                isVisited[*i] = true;
                bfsQueue.push(*i);
            }
        }
    }
}


int main27() {
    // Initialize graph object
    Graph2 g;

    // Add edges to the graph
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Breadth First Search traversal with vertex 2 as starting point is:" << endl;
    g.BFS(2);
    cout << endl << endl;
    return 0;
}