/*
C++ program for Prim's algorithm to find Minimum Spanning tree for a given undirected, connected and weighted graph.
Minimum spanning Tree = Acyclic graph with all the vertices so that the tree weight is minimum
*/
#include <iostream>
#include<vector>
#include<list>
#include<utility>
#include<queue>
#include<algorithm>

using namespace std;

class Graph4 {

    int nV, nE; // No of Edges and Vertices

    list<pair<int, int>> *edges; // This contains the list of edged between two vertices

public:
    Graph4(int noOfV, int noOfE) {
        this->nV = noOfV;
        this->nE = noOfE;
        edges = new list<pair<int, int>>[2 * noOfE];
    }

    void addEdge(int from, int to, int weight); // Add an edge [from] node to [to] node

    int primMST(); // Here Prim's MST is implemented
};

void Graph4::addEdge(int from, int to, int weight) {
    edges[from].push_back(make_pair(to, weight));
    edges[to].push_back(make_pair(from, weight));
}

int Graph4::primMST() {
    
    // Create priority queue to store vertices in MST
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> queue1;

    int srcVertex = 0;
    
    vector<int> key(this->nV, INT16_MAX); // Key values used to pick minimum weight edge in cut

    vector<int> parent(this->nV, -1);

    vector<bool> inMST(this->nV, false); // To keep track if that vertex is in MST or not

    // Initialize by pushing node 0 and putting it's key as 0
    queue1.push(make_pair(0, srcVertex));
    key[srcVertex] = 0;

    // Looping till queue is empty
    while (!queue1.empty())
    {   
        // The first vertex in pair is the minimum key vertex, extract it from priority queue.
        // Vertex label is stored in second element of pair (it has to be done this way to keep the vertices sorted with weight)

        int u = queue1.top().second;
        queue1.pop();

        // If the vertex is already in MST then continue 
        if (inMST[u] == true) {
            continue;
        }

        // Otherwise we include this in MST
        inMST[u] = true;

        // Iterate through all the edges of u
        list< pair<int, int> >::iterator i;
        for (i = edges[u].begin(); i != edges[u].end(); ++i)
        {
            // Get the edge (to-vertex and weight pair)
            int v = (*i).first;
            int weight = (*i).second;

            //  If v is not in MST and the key is more than the edge weight
            if (inMST[v] == false && key[v] > weight)
            {
                // Updating key of v so that it is always minimum
                key[v] = weight;
                queue1.push(make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }

    for (int j = 1; j < this->nV; ++j) {
        printf("%d - %d\n", parent[j], j);
    }

    int minVal = 0;
    for (int a = 0; a < this->nV; ++a) {
        minVal += key[a];
    }

    return minVal;
}

int main29()
{
    // Create a graph is 9 vertices and 14 edges

    int V = 9, E = 14;
    Graph4 g(V, E);

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

    cout << "Prim's MST is :" << endl;
    int mst_wt = g.primMST();

    cout << endl << "Weight of MST is " << mst_wt << endl << endl;

    return 0;
}