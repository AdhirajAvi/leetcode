#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
public:
    vector<int> parent, size;

    DisjointSet(int n) {
        parent.resize(n);
        size.resize(n, 1);

        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;

        return parent[node] = findUPar(parent[node]);
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        if (ulp_u == ulp_v)
            return;

        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

int kruskalMST(int V, vector<vector<int>>& edges) {

    // Sort edges by weight
    sort(edges.begin(), edges.end());

    DisjointSet ds(V);

    int mstWeight = 0;

    for (auto edge : edges) {

        int wt = edge[0];
        int u = edge[1];
        int v = edge[2];

        // If they belong to different components
        if (ds.findUPar(u) != ds.findUPar(v)) {

            mstWeight += wt;
            ds.unionBySize(u, v);
        }
    }

    return mstWeight;
}

int main() {

    int V = 4;

    // {weight, u, v}
    vector<vector<int>> edges = {
        {1,0,1},
        {2,1,2},
        {3,0,2},
        {4,2,3},
        {5,1,3}
    };

    cout << "Weight of MST = " << kruskalMST(V, edges);

    return 0;
}