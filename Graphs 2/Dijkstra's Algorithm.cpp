// Given an undirected, connected and weighted graph G(V, E) with V number of vertices (which are numbered from 0 to V-1) and E number of edges.
// Find and print the shortest distance from the source vertex (i.e. Vertex 0) to all other vertices (including source vertex also) using Dijkstra's Algorithm.

#include <iostream>
#include <climits>
using namespace std;

long findMinimumVertex(long *distance, bool *visited, long v)
{
    long vertex = -1;
    for (long i = 0; i < v; i++)
    {
        if (!visited[i] && (vertex == -1 || distance[i] < distance[vertex]))
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

    // Dijkstra's algorithm

    bool *visited = new bool[v];
    long *distance = new long[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
        distance[i] = INT_MAX;
    }
    distance[0] = 0;

    for (long i = 0; i < v; i++)
    {
        long vertex = findMinimumVertex(distance, visited, v);
        visited[vertex] = true;
        for (long j = 0; j < v; j++)
        {
            if (edges[vertex][j] && edges[vertex][j] < distance[j] && !visited[j] && (distance[vertex] + edges[vertex][j]) < distance[j])
                distance[j] = distance[vertex] + edges[vertex][j];
        }
    }

    for (long i = 0; i < v; i++)
        cout << i << " " << distance[i] << "\n";

    for (int i = 0; i < v; i++)
        delete edges[i];
    delete[] edges;
    delete[] distance;
    delete[] visited;
    return 0;
}

/*
#include<iostream>
#include<climits>
using namespace std;


int findMinVertex(int* distance, bool* visited, int n){

	int minVertex = -1;
	for(int i = 0; i < n; i++){
		if(!visited[i] && (minVertex == -1 ||  distance[i] < distance[minVertex])){
			minVertex = i;
		}
	}
	return minVertex;
}

void dijkstra(int** edges, int n){
	int* distance = new int[n];
	bool* visited = new bool[n];

	for(int i = 0; i < n; i++){
		distance[i] = INT_MAX;
		visited[i] = false;
	}

	distance[0] = 0;

	for(int i = 0; i < n - 1; i++){
		int minVertex = findMinVertex(distance, visited, n);
		visited[minVertex] = true;
		for(int j = 0; j < n; j++){	
			if(edges[minVertex][j] != 0 && !visited[j]){
				int dist = distance[minVertex] + edges[minVertex][j];
				if(dist < distance[j]){
					distance[j] = dist;
				}
			}
		}
	}

	for(int i = 0; i < n; i++){
		cout << i << " " << distance[i] << endl;
	}
	delete [] visited;
	delete [] distance;
	
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
	dijkstra(edges, n);

	for (int i = 0; i < n; i++) {
		delete [] edges[i];
	}
	delete [] edges;
}
*/
