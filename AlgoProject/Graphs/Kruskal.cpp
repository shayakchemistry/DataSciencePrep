/*
C++ program for Kruskal's algorithm to find Minimum Spanning tree for a given undirected, connected and weighted graph.
Minimum spanning Tree = Acyclic graph with all the vertices so that the tree weight is minimum
*/

#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

class DisjointSet1 {
    int* parentArr, * rankArr;
    int n;

public:
    
    DisjointSet1(int n);

    int find(int a); // Find parent of "a"

    void merge(int x, int y); // Merge by rank
};

class Graph3 {

    int nV, nE; // No of Edges and Vertices

    vector<pair<int, pair<int, int>>> edges; // This contains the list of edged between two vertices

public:
    Graph3(int noOfV, int noOfE) {
        this->nV = noOfV;
        this->nE = noOfE;
    }

    void addEdge(int from, int to, int weight); // Add an edge [from] node to [to] node

    int kruskalMST(); // Here Kruskal's MST is implemented
};

DisjointSet1::DisjointSet1(int n) {
    int i;
    this->n = n;
    parentArr = new int[n + 1];
    rankArr = new int[n + 1];

    // Initialize, all vertices to be it's parent and rank to be 0
    for (i = 0; i <= n; i++)
    {
        rankArr[i] = 0;
        parentArr[i] = i;
    }
}

int DisjointSet1::find(int a)
{
    // Make the parent of the nodes in the path from u--> parent[u] point to parent[u]
    if (a != parentArr[a]) {
        parentArr[a] = find(parentArr[a]);
    }
    
    return parentArr[a];
}

void DisjointSet1::merge(int x, int y) {

    int x1 = find(x);
    int y1 = find(y);

    // Make tree with smaller height a subtree of the other tree
    if (rankArr[x1] > rankArr[y1]) {
        parentArr[y1] = x1;
    }
    else {
        parentArr[x1] = y1;
    }
    if (rankArr[x1] == rankArr[y1]) {
        rankArr[y1]++;
    }
}

void Graph3::addEdge(int from, int to, int weight) {
    edges.push_back({ weight, {from, to}});
}


int Graph3::kruskalMST() {
    int mst_wt = 0; // Final Weight to return 

    // Sort edges in increasing order on basis of cost
    sort(edges.begin(), edges.end());
    
    // Create disjoint sets
    DisjointSet1 djs1(this->nV);

    // Iterate through all sorted edges
    vector<pair<int, pair<int, int>>>::iterator i;
    for (i = edges.begin(); i != edges.end(); ++i)
    {
        int vertexA = i->second.first;
        int vertexB = i->second.second;

        // Finding endpoints of A and B
        int parentA = djs1.find(vertexA);
        int parentB = djs1.find(vertexB);

        // Check if it is a cycle. If not add it to the list
        if (parentA != parentB)
        {
            // If it doesn't form a cycle then add it
            cout << vertexA << " - " << vertexB << endl;

            // Update MST weight
            mst_wt += i->first;

            // Merge two sets
            djs1.merge(parentA, parentB);
        }
    }

    return mst_wt;
}


int main28()
{
    // Create a graph is 9 vertices and 14 edges

    int V = 9, E = 14;
    Graph3 g(V, E);

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

    cout << "Kruskal's MST is :" << endl;
    int mst_wt = g.kruskalMST();

    cout << endl <<"Weight of MST is " << mst_wt << endl << endl;

    return 0;
}