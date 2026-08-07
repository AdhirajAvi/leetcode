#include <bits/stdc++.h>
using namespace std;

int dijkstra(int n, vector<vector<int>> times, int src)
{

    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>>
        pq;

    vector<vector<pair<int,int>>> adj(n+1);
    // vector<pair<int, int>> adj(n);
    for (auto it : times)
    {
        int u = it[0];
        int v = it[1];
        int wt = it[2];

        adj[u].push_back({v, wt});

        // Uncomment for an undirected graph
        // adj[v].push_back({u, wt});
    }

    vector<int> dist(n+1, INT_MAX);

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

    // return dist;
    int ans = 0;

    for(int i=1;i<=n;i++)
    {
        if(dist[i]==INT_MAX)
            return -1;

        ans = max(ans, dist[i]);
    }

    return ans;
}

int main()
{

    int n = 4;

    vector<vector<int>> times = {
    {2,1,1},
    {2,3,1},
    {3,4,1}
};

    int k=2;
    int ans = dijkstra(n, times, k);
    cout<<ans<<endl;
    return 0;
}