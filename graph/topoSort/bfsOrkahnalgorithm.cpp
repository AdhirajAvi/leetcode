#include <bits/stdc++.h>
using namespace std;

vector<int> topoSort(int V, vector<int> adj[])
{

    vector<int> indegree(V, 0);

    for (int i = 0; i < V; i++)
    {

        for (int j = 0; j < adj[i].size(); j++)
        {

            indegree[adj[i][j]]++;
        }
    }

    queue<int> q;

    for (int i = 0; i < V; i++)
    {

        if (indegree[i] == 0)
        {

            q.push(i);
        }
    }

    vector<int> ans;

    while (!q.empty())
    {

        int node = q.front();
        q.pop();

        ans.push_back(node);

        for (int i = 0; i < adj[node].size(); i++)
        {

            int adjNode = adj[node][i];

            indegree[adjNode]--;

            if (indegree[adjNode] == 0)
            {

                q.push(adjNode);
            }
        }
    }

    return ans;
}

int main()
{

    int V = 6;

    vector<int> adj[] = {
        {},
        {},
        {3},
        {1},
        {0, 1},
        {0, 2}};

    vector<int> ans = topoSort(V, adj);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}