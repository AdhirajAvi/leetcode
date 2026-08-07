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

int removeStones(vector<vector<int>>& stones) {

    int n = stones.size();

    DisjointSet ds(n);

    // Union stones in same row or same column
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (stones[i][0] == stones[j][0] ||
                stones[i][1] == stones[j][1]) {

                ds.unionBySize(i, j);
            }
        }
    }

    // Count connected components
    int components = 0;

    for (int i = 0; i < n; i++) {
        if (ds.findUPar(i) == i)
            components++;
    }

    return n - components;
}

int main() {

    vector<vector<int>> stones = {
        {0,0},
        {0,1},
        {1,0},
        {1,2},
        {2,1},
        {2,2}
    };

    cout<< removeStones(stones)<<endl;

    return 0;
}