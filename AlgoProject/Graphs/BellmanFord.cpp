/*
C++ program to implement Bellman Ford Algorithm. In this we use the directed graph and compute shortest paths between two vertices.
*/

#include<iostream>

using namespace std;

class Edge1 {
public:
    int from;
    int to;
    int weight;
};


class Graph5 {

    int nV;
    int nE;
    int tmpCounter;
    Edge1** edgeArr;
    
public:

    Graph5(int V, int E) {
        this->nV = V;
        this->nE = E;
        this->tmpCounter = 0;
        this->edgeArr = new Edge1 * [E];
    }

    void addEdge(int from, int to, int weight);

    void bellmanFord(int src);
};


void Graph5::addEdge(int from, int to, int weight) {
    Edge1* newEdge = new Edge1();
    newEdge->from = from;
    newEdge->to = to;
    newEdge->weight = weight;

    edgeArr[tmpCounter] = newEdge;
}

void Graph5::bellmanFord(int src) {

    // Initialize Distance and path Matrix
    int* dist = new int[this->nV];
    int* path = new int[this->nV];
    int i, j;

    // Initialize distance
    for (i = 0; i < this->nV; i++) {
        dist[i] = INT16_MAX;
        path[i] = -1;
    }

    dist[src] = 0;
    path[src] = src; // As path to itself is itself

    for (i = 0; i < this->nV - 1; i++) { // We do this vertices - 1 as 1 i.e. the source points to itself  
        for (j = 0; j < this->nE; j++) {
            int u = edgeArr[j]->from;
            int v = edgeArr[j]->to;
            int cost = edgeArr[j]->weight;

            if (dist[u] != INT16_MAX && dist[v] > dist[u] + cost) {
                dist[v] = dist[u] + cost;
                path[v] = u;
            }
        }
    }

    // Now check for negative cycles
    /* checking if negative cycle is present */
    for (j = 0; j < this->nE; j++)
    {
        int u = edgeArr[j]->from;
        int v = edgeArr[j]->to;
        int cost = edgeArr[j]->weight;

        if (dist[v] > dist[u] + cost)
        {
            cout << "NEGATIVE CYCLE PRESENT..!!" << endl;
            return;
        }
    }

    cout << "Printing Distance table" << endl << endl;
    cout << "|\tNode\t|\tPredecessor\t|\tWeight\t|" << endl;
    for (i = 0; i < this->nV; i++)
    {
        cout << "|\t" << i << "\t|\t" << path[i] << "\t|\t" << dist[i] << "\t|" << endl;
    }
}

int main30()
{
    // Create a graph is 9 vertices and 14 edges

    int V = 9, E = 14;
    Graph5 g(V, E);

    // Adding edges
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    cout << "Considering source as 0 Bellman Ford single source shortest path is: " << endl;

    g.bellmanFord(0);

    return 0;
}