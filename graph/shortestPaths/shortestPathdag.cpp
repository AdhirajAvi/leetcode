#include <bits/stdc++.h>
using namespace std;

void topoSort(int node, vector<pair<int, int>> adj[], vector<int> &vis, stack<int> &st) {

    vis[node] = 1;

    for (auto it : adj[node]) {
        int adjNode = it.first;

        if (!vis[adjNode]) {
            topoSort(adjNode, adj, vis, st);
        }
    }

    st.push(node);
}

vector<int> shortestPath(int V, vector<vector<int>> &edges, int src) {

    // Adjacency List made as question didnt gave vector in right format
    vector<pair<int, int>> adj[V];
    for (auto it : edges) {
        int u = it[0];
        int v = it[1];
        int wt = it[2];
        adj[u].push_back({v, wt});
    }

    // Topological Sort
    vector<int> vis(V, 0);
    stack<int> st;

    for (int i = 0; i < V; i++) {
        if (!vis[i]) {
            topoSort(i, adj, vis, st);
        }
    }

    // Shortest Distance
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    while (!st.empty()) {

        int node = st.top();
        st.pop();

        if (dist[node] != INT_MAX) {

            for (auto it : adj[node]) {

                int adjNode = it.first;
                int wt = it.second;

                if (dist[node] + wt < dist[adjNode]) {
                    dist[adjNode] = dist[node] + wt;
                }
            }
        }
    }

    return dist;
}

int main() {

    int V = 6;
    int src = 0;

    vector<vector<int>> edges = {
        {0, 1, 2},
        {0, 4, 1},
        {1, 2, 3},
        {4, 2, 2},
        {4, 5, 4},
        {2, 3, 6},
        {5, 3, 1}
    };

    vector<int> ans = shortestPath(V, edges, src);

    for (int x : ans) {
        if (x == INT_MAX)
            cout << "INF ";
        else
            cout << x << " ";
    }

    return 0;
}