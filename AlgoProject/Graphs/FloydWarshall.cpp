/*
C++ program to implement Floyd Warshall's Algorithm. In this we use the directed graph and All Pair shortest paths between two vertices.
*/

#include<iostream>

using namespace std;

class Edge3 {
public:
    int from;
    int to;
    int weight;
};


class Graph7 {

    int nV;
    int nE;
    int tmpCounter;
    Edge3** edgeArr;

public:

    Graph7(int V, int E) {
        this->nV = V;
        this->nE = E;
        this->tmpCounter = 0;
        this->edgeArr = new Edge3 * [E];
    }

    void addEdge(int from, int to, int weight);

    int getEdgeCost(int from, int to);

    void floydWarshall();
};


void Graph7::addEdge(int from, int to, int weight) {
    Edge3* newEdge = new Edge3();
    newEdge->from = from;
    newEdge->to = to;
    newEdge->weight = weight;

    edgeArr[tmpCounter] = newEdge;
    tmpCounter += 1;
}


int Graph7::getEdgeCost(int from, int to) {
    int i;
    int cost = INT16_MAX;

    for (i = 0; i < this->nE; i++) {
        if (edgeArr[i]->from == from && edgeArr[i]->to == to) {
            cost = edgeArr[i]->weight;
            break;
        }
    }

    return cost;
}


void Graph7::floydWarshall() {
    int i, j, k;

    // Initialize Distance Array
    int** dist = new int* [this->nV];

    for (i = 0; i < this->nV; i++) {
        dist[i] = new int[this->nV];
    }

    // Now for initialization = Distance 0th

    for (i = 0; i < this->nV; i++) {
        for (j = 0; j < this->nV; j++) {
            dist[i][j] = getEdgeCost(i, j);
        }
    }

    // For Distance n iteration
    for (k = 0; k < this->nV; k++) {
        for (i = 0; i < this->nV; i++) {
            for (j = 0; j < this->nV; j++) {
                if (dist[i][j] > dist[i][k] + dist[k][j]) { // If i -> j is not minimum then i->k->k can be minimum
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    cout << "Printing minimum distance matrix" << endl;

    for (i = 0; i < this->nV; i++) {
        for (j = 0; j < this->nV; j++) {
            if (dist[i][j] == INT16_MAX) {
                cout << "INF\t";
            }
            else {
                cout << dist[i][j] << "\t";
            }
        }
        cout << endl;
    }
}


int main32()
{
    // Create a graph is 9 vertices and 14 edges

    int V = 9, E = 14;
    Graph7 g(V, E);

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

    cout << "Floyd Warshall all pair shortest path is: " << endl;

    g.floydWarshall();

    return 0;
}