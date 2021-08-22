/*
* C++ program to implement Dijkstra's Algorithm. In this we use the directed graph and compute shortest paths between two vertices.
*/

#include<iostream>

using namespace std;

class Edge2 {
public:
	int from;
	int to;
	int weight;
};


class Graph6 {

	int nV;
	int nE;
	int tmpCounter;
	Edge2** edgeArr;

public:

	Graph6(int V, int E) {
		this->nV = V;
		this->nE = E;
		this->tmpCounter = 0;
		this->edgeArr = new Edge2 * [E];
	}

	void addEdge(int from, int to, int weight);

	int getEdgeCost(int from, int to);

	int minDist(int dist[], bool Dset[]);

	void dijkstra(int src);
};


void Graph6::addEdge(int from, int to, int weight) {
	Edge2* newEdge = new Edge2();
	newEdge->from = from;
	newEdge->to = to;
	newEdge->weight = weight;

	edgeArr[tmpCounter] = newEdge;
}

int Graph6::getEdgeCost(int from, int to) {
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


int Graph6::minDist(int dist[], bool Dset[]) {
	int min = INT16_MAX;
	int index = -1; // Vertex with minimum distance
	int i;

	// Now find the vertex with minimum distance and not in Dset
	for (i = 0; i < this->nV; i++)
	{
		if (Dset[i] == false && dist[i] <= min)
		{
			min = dist[i];
			index = i;
		}
	}
	return index;
}

void Graph6::dijkstra(int src) {

	// Initialize Dset, dist and index arrays

	bool* Dset = new bool[this->nV];
	int* dist = new int[this->nV];
	int* index = new int[this->nV];
	int i, v;

	for (i = 0; i < this->nV; i++) {
		Dset[i] = false;
		dist[i] = INT16_MAX;
		index[i] = -1;
	}

	// For the source we have distance = 0
	dist[src] = 0;
	index[src] = src;

	// Now loop for all vertices
	for (int i = 0; i < this->nV; i++) {
		int u = this->minDist(dist, Dset);

		// If no minimum is found
		if (u == -1) {
			continue;
		}

		//Else set the selected min vertex to Dset
		Dset[u] = true;
		for (v = 0; v < this->nV; v++) {
			// Update v is not in Dset
			int cost = getEdgeCost(u, v);
			if (!Dset[v] && cost != INT16_MAX && dist[u] != INT_MAX && dist[v] > dist[u] + cost) {
				dist[v] = dist[u] + cost;
				index[v] = u;
			}
		}
	}

	cout << "Printing Distance table" << endl << endl;
	cout << "|\tNode\t|\tPredecessor\t|\tWeight\t|" << endl;
	for (i = 0; i < this->nV; i++)
	{
		cout << "|\t" << i << "\t|\t" << index[i] << "\t|\t" << dist[i] << "\t|" << endl;
	}

}

int main31()
{
	// Create a graph is 9 vertices and 14 edges

	int V = 9, E = 14;
	Graph6 g(V, E);

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

	cout << "Considering source as 0 Dijkstra single source shortest path is: " << endl;

	g.dijkstra(0);

	return 0;
}