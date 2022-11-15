// CPP program to implement traveling salesman
// problem using naive approach.
#include <bits/stdc++.h>
using namespace std;
#define V 4

// implementation of traveling Salesman Problem
int tsp(int graph[][V], int s)
{
	// store all vertex apart from source vertex
	vector<int> v;
	for (int i = 0; i < V; i++)
		if (i != s)
			v.push_back(i);

	// store minimum weight Hamiltonian Cycle.
	int min_path = INT_MAX;
	do {

		// store current Path weight(cost)
		int current_path = 0;

		// compute current path weight
		int k = s;
		for (int i = 0; i < v.size(); i++) {
			current_path += graph[k][v[i]];
			k = v[i];
		}
		current_path += graph[k][s];

		// update minimum
		min_path = min(min_path, current_path);

	} while (
		next_permutation(v.begin(), v.end()));

	return min_path;
}

// Driver Code
int main()
{
	// matrix representation of graph
	int graph[][V] = { { 0, 10, 15, 20 },
					{ 10, 0, 35, 25 },
					{ 15, 35, 0, 30 },
					{ 20, 25, 30, 0 } };
	int s = 0;
	cout << tsp(graph, s) << endl;
	return 0;
}
