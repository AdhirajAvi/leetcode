#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int V, vector<pair<int, int>> adj[], int src)
{

    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>>
        pq;

    vector<int> dist(V, INT_MAX);

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty())
    {

        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (dis > dist[node])
            continue;

        for (auto it : adj[node])
        {

            int adjNode = it.first;
            int edgeWeight = it.second;

            if (dis + edgeWeight < dist[adjNode])
            {

                dist[adjNode] = dis + edgeWeight;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }

    return dist;
}

int main()
{

    int V = 5;
    vector<pair<int, int>> adj[V];

    vector<vector<int>> edges = {
        {0, 1, 2},
        {0, 4, 1},
        {1, 2, 3},
        {2, 3, 6},
        {4, 2, 2},
        {4, 3, 4}};

    for (auto it : edges)
    {
        int u = it[0];
        int v = it[1];
        int wt = it[2];

        adj[u].push_back({v, wt});

        // Uncomment for an undirected graph
        // adj[v].push_back({u, wt});
    }

    vector<int> ans = dijkstra(V, adj, 0);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}