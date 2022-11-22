// Given an undirected, connected and weighted graph G(V, E) with V number of vertices (which are numbered from 0 to V-1) and E number of edges.
// Find and print the Minimum Spanning Tree (MST) using Prim's algorithm.
  
// For printing MST follow the steps -
// 1. In one line, print an edge which is part of MST in the format - 
// v1 v2 w
// where, v1 and v2 are the vertices of the edge which is included in MST and whose weight is w. And v1  <= v2 i.e. print the smaller vertex first while printing an edge.
// 2. Print V-1 edges in above format in different lines.
  
// Note : Order of different edges doesn't matter.

#include <iostream>
#include <climits>
using namespace std;

long findMinimumVertex(long *weights, bool *visited, long v)
{
    long vertex = -1;
    for (long i = 0; i < v; i++)
    {
        if (!visited[i] && (vertex == -1 || weights[i] < weights[vertex]))
            vertex = i;
    }
    return vertex;
}

int main(){

    long v, e;
    cin >> v >> e;
    long **edges = new long *[v];
    for (long i = 0; i < v; i++)
    {
        edges[i] = new long[v];
        for (long j = 0; j < v; j++)
            edges[i][j] = 0;
    }

    for (long i = 0; i < e; i++)
    {
        long start, end, weight;
        cin >> start >> end >> weight;
        edges[start][end] = weight;
        edges[end][start] = weight;
    }

    // Prim's algorithm

    bool *visited = new bool[v];
    long *weights = new long[v];
    long *parents = new long[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
        weights[i] = INT_MAX;
    }
    parents[0] = -1;
    weights[0] = 0;

    for (long i = 0; i < (v - 1); i++)
    {
        long vertex = findMinimumVertex(weights, visited, v);
        visited[vertex] = true;
        for (long j = 0; j < v; j++)
        {
            if (edges[vertex][j] && !visited[j] && edges[vertex][j] < weights[j])
            {
                parents[j] = vertex;
                weights[j] = edges[vertex][j];
            }
        }
    }

    for (long i = 1; i < v; i++)
        cout << min(i, parents[i]) << " " << max(i, parents[i]) << " " << weights[i] << "\n";

    for (int i = 0; i < v; i++)
        delete edges[i];
        
    delete[] edges;
    delete[] weights;
    delete[] parents;
    delete[] visited;
    return 0;
}

/*

#include<iostream>
#include<climits>
using namespace std;

int findMinVertex(int* weights, bool* visited, int n){

	int minVertex = -1;
	for(int i = 0; i < n; i++){
		if(!visited[i] && (minVertex == - 1 || weights[i] < weights[minVertex])){
			minVertex = i;
		}
	}
	return minVertex;
}


void prims(int** edges, int n){

	int* parent = new int[n];
	int* weights = new int[n];
	bool* visited = new bool[n];

	for(int i = 0; i < n; i++){
		visited[i] = false;
		weights[i] = INT_MAX;
	}
	parent[0] = -1;
	weights[0] = 0;

	for(int i = 0; i < n - 1; i++){
		// Find Min Vertex
		int minVertex = findMinVertex(weights, visited, n);
		visited[minVertex] = true;
		// Explore un visted neighbours
		for(int j = 0; j < n; j++){
			if(edges[minVertex][j] != 0 && !visited[j]){
				if(edges[minVertex][j] < weights[j]){
					weights[j] = edges[minVertex][j];
					parent[j] = minVertex;
				}
			}
		}
	}

	for(int i = 1; i < n; i++){
		if(parent[i] < i){
			cout << parent[i] < " << i << " " << weights[i] << endl;
		}else{
			cout << i << " " << parent[i] << " " << weights[i] << endl;
		}
	}
}

int main() {
	int n;
	int e;
	cin >> n >> e;
	int** edges = new int*[n];
	for (int i = 0; i < n; i++) {
		edges[i] = new int[n];
		for (int j = 0; j < n; j++) {
			edges[i][j] = 0;
		}
	}

	for (int i = 0; i < e; i++) {
		int f, s, weight;
		cin >> f >> s >> weight;
		edges[f][s] = weight;
		edges[s][f] = weight;
	}
	cout << endl;
	prims(edges, n);

	for (int i = 0; i < n; i++) {
		delete [] edges[i];
	}
	delete [] edges;
}
*/
