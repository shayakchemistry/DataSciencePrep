/*
* C++ implementataion of Depth First Search. Here we consider a directed graph data structure and is stored as a map.
*/
#include<iostream>
#include<list>
#include<map>

using namespace std;

class Graph1 {
	map<int, bool> isVisited; // To check whether the node is visisted
	map<int, list<int>> adj; // node -> [list of directed nodes]

public:
	void addEdge(int from, int to); // Add an edge [from] node to [to] node
	void DFS(int source); // Compute DFS with source as the starting point
};

void Graph1::addEdge(int from, int to) {
	adj[from].push_back(to); // Add egde to the graph
}

void Graph1::DFS(int source) {
	isVisited[source] = true; // Setting it to true as we are visiting it now
	cout << source << " "; // Print the vertex as we are visiting it

	// For all the vertices adjacent to this vertex
	// Recursively thun DFS if we havn't visited the node
	
	list<int>::iterator i; // List iterator for all the adjacent vertices
	
	for (i = adj[source].begin(); i != adj[source].end(); ++i) {
		if (!isVisited[*i]) {
			DFS(*i);
		}
	}
}

int main26() {
	// Initialize graph object
	Graph1 g;

	// Add edges to the graph
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Depth First Search traversal with vertex 2 as starting point is:" << endl;
	g.DFS(2);
	cout << endl << endl;
	return 0;
}