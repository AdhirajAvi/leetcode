// #include <bits/stdc++.h>
// using namespace std;

// int findCheapestPrice(int n, vector<vector<int>>& flights,
//                       int src, int dst, int k) {

//     vector<pair<int,int>> adj[n];

//     for (auto it : flights) {
//         adj[it[0]].push_back({it[1], it[2]});
//     }

//     vector<int> dist(n, INT_MAX);

//     priority_queue<
//         pair<int,pair<int,int>>,
//         vector<pair<int,pair<int,int>>>,
//         greater<pair<int,pair<int,int>>>
//     > pq;
//     // {cost,{node,stops}}

//     pq.push({0,{src,0}});
//     dist[src] = 0;

//     while (!pq.empty()) {

//         int cost = pq.top().first;
//         int node = pq.top().second.first;
//         int stops = pq.top().second.second;
//         pq.pop();

//         if (stops > k + 1)
//             continue;

//         for (auto it : adj[node]) {

//             int adjNode = it.first;
//             int wt = it.second;

//             if (cost + wt < dist[adjNode]) {

//                 dist[adjNode] = cost + wt;
//                 pq.push({dist[adjNode], {adjNode, stops + 1}});
//             }
//         }
//     }

//     if (dist[dst] == INT_MAX)
//         return -1;

//     return dist[dst];
// }

// int main() {

//     int n = 4;

//     vector<vector<int>> flights = {
//         {0,1,100},
//         {1,2,100},
//         {2,0,100},
//         {1,3,600},
//         {2,3,200}
//     };

//     int src = 0;
//     int dst = 3;
//     int k = 1;

//     cout << findCheapestPrice(n, flights, src, dst, k);

//     return 0;
// }


// or  
// queue version 
#include <bits/stdc++.h>
using namespace std;

int findCheapestPrice(int n, vector<vector<int>>& flights,
                      int src, int dst, int k) {

    vector<pair<int,int>> adj[n];

    for (auto it : flights) {
        adj[it[0]].push_back({it[1], it[2]});
    }

    vector<int> dist(n, INT_MAX);

    queue<pair<int,pair<int,int>>> q;
    // {stops,{node,cost}}

    q.push({0,{src,0}});
    dist[src] = 0;

    while (!q.empty()) {

        int stops = q.front().first;
        int node = q.front().second.first;
        int cost = q.front().second.second;
        q.pop();

        if (stops > k)
            continue;

        for (auto it : adj[node]) {

            int adjNode = it.first;
            int wt = it.second;

            if (cost + wt < dist[adjNode]) {

                dist[adjNode] = cost + wt;
                q.push({stops + 1, {adjNode, dist[adjNode]}});
            }
        }
    }

    if (dist[dst] == INT_MAX)
        return -1;

    return dist[dst];
}

int main() {

    int n = 4;

    vector<vector<int>> flights = {
        {0,1,100},
        {1,2,100},
        {2,0,100},
        {1,3,600},
        {2,3,200}
    };

    int src = 0;
    int dst = 3;
    int k = 1;

    cout << findCheapestPrice(n, flights, src, dst, k);

    return 0;
}