#include <bits/stdc++.h>
using namespace std;

int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {

    vector<pair<int,int>> adj[n];

    for (auto it : edges) {
        adj[it[0]].push_back({it[1], it[2]});
        adj[it[1]].push_back({it[0], it[2]});
    }

    int city = -1;
    int cntCity = INT_MAX;

    for (int src = 0; src < n; src++) {

        vector<int> dist(n, INT_MAX);

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        dist[src] = 0;
        pq.push({0, src});

        while (!pq.empty()) {

            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if (dis > dist[node])
                continue;

            for (auto it : adj[node]) {

                int adjNode = it.first;
                int wt = it.second;

                if (dis + wt < dist[adjNode]) {
                    dist[adjNode] = dis + wt;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }

        int counter = 0;

        for (int i = 0; i < n; i++) {
            if (dist[i] <= distanceThreshold)
                counter++;
        }

        if (counter <= cntCity) {
            cntCity = counter;
            city = src;
        }
    }

    return city;
}

int main() {

    int n = 4;

    vector<vector<int>> edges = {
        {0,1,3},
        {1,2,1},
        {1,3,4},
        {2,3,1}
    };

    int distanceThreshold = 4;

    cout << findTheCity(n, edges, distanceThreshold);

    return 0;
}