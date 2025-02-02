#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void computeGiovanniNumbers(int P, vector<vector<int>>& adj_list) {
    vector<int> giovanni_numbers(P, -1); // Initialize with -1 (meaning undefined)
    queue<int> q;
    q.push(0); // Start BFS from Don Giovanni (node 0)
    giovanni_numbers[0] = 0; // Don Giovanni has Giovanni number 0

    while (!q.empty()) {
        int person = q.front();
        q.pop();

        for (int neighbor : adj_list[person]) {
            if (giovanni_numbers[neighbor] == -1) { // Not yet visited
                giovanni_numbers[neighbor] = giovanni_numbers[person] + 1;
                q.push(neighbor);
            }
        }
    }

    // Output results for persons 1 to P-1 (skip person 0)
    for (int i = 1; i < P; ++i) {
        cout << giovanni_numbers[i] << "\n";
    }
}

int main() {
    int T;
    cin >> T;
    bool first_case = true;

    while (T--) {
        if (!first_case) {
            cout << "\n"; // Output blank line between consecutive test cases
        }
        first_case = false;

        int P, D;
        cin >> P >> D;

        vector<vector<int>> adj_list(P); // Adjacency list for persons
        int u, v;
        for (int i = 0; i < D; ++i) {
            cin >> u >> v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u); // Undirected graph
        }

        computeGiovanniNumbers(P, adj_list);
    }

    return 0;
}
