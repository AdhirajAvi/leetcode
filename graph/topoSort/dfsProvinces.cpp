#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<int>& vis, stack<int>& st) {

    vis[node] = 1;

    for (int i = 0; i < adj[node].size(); i++) {

        int adjNode = adj[node][i];

        if (!vis[adjNode]) {

            dfs(adjNode, adj, vis, st);
        }
    }

    st.push(node);
}

vector<int> topoSort(int V, vector<int> adj[]) {

    vector<int> vis(V, 0);
    stack<int> st;

    for (int i = 0; i < V; i++) {

        if (!vis[i]) {

            dfs(i, adj, vis, st);
        }
    }

    vector<int> ans;

    while (!st.empty()) {

        ans.push_back(st.top());
        st.pop();
    }

    return ans;
}

int main() {

    int V = 6;

    vector<int> adj[] = {
    {},
    {},
    {3},
    {1},
    {0,1},
    {0,2}
};

    vector<int> ans = topoSort(V, adj);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
// only diff is here stack 