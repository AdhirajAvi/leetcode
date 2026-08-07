#include <bits/stdc++.h>
using namespace std;

int minimumSemesters(int n, vector<vector<int>>& relations) {

    vector<int> adj[n + 1];
    vector<int> indegree(n + 1, 0);

    // Build Graph
    for (auto it : relations) {
        adj[it[0]].push_back(it[1]);
    }

    // Calculate Indegree
    for (int i = 1; i <= n; i++) {
        for (auto adjNode : adj[i]) {
            indegree[adjNode]++;
        }
    }

    // Initialize Queue
    queue<int> q;

    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0)
            q.push(i);
    }

    int semester = 0;
    int cnt = 0;

    // Kahn's Algorithm
    while (!q.empty()) {

        int size = q.size();
        semester++;

        while (size--) {

            int node = q.front();
            q.pop();

            cnt++;

            for (auto adjNode : adj[node]) {

                indegree[adjNode]--;

                if (indegree[adjNode] == 0)
                    q.push(adjNode);
            }
        }
    }

    if (cnt != n)
        return -1;

    return semester;
}

int main() {

    int n = 3;

    vector<vector<int>> relations = {
        {1, 3},
        {2, 3}
    };

    cout << minimumSemesters(n, relations);

    return 0;
}