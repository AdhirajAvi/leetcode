// no use!!!!!!!! 
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> topoSort(int V, vector<int> adj[])
// {

//     vector<int> indegree(V, 0);

//     for (int i = 0; i < V; i++)
//     {

//         for (int j = 0; j < adj[i].size(); j++)
//         {

//             indegree[adj[i][j]]++;
//         }
//     }

//     queue<int> q;

//     for (int i = 0; i < V; i++)
//     {

//         if (indegree[i] == 0)
//         {

//             q.push(i);
//         }
//     }

//     vector<int> ans;
//     // int counter=0;

//     while (!q.empty())
//     {

//         int node = q.front();
//         q.pop();

//         ans.push_back(node);
//         // counter++;

//         for (int i = 0; i < adj[node].size(); i++)
//         {

//             int adjNode = adj[node][i];

//             indegree[adjNode]--;

//             if (indegree[adjNode] == 0)
//             {

//                 q.push(adjNode);
//             }
//         }
//     }

//     return ans;
// }

// int main()
// {

//     int V = 6;

//     vector<int> adj[] = {
//         {},
//         {},
//         {3},
//         {1},
//         {0, 1},
//         {0, 2}};

//     vector<int> ans = topoSort(V, adj);

//     for (int x : ans)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {


    vector<int> adj[numCourses];
    // Build graph
    for (int i = 0; i < prerequisites.size(); i++) {

        adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
    }


    vector<int> indegree(numCourses, 0);

    for (int i = 0; i < numCourses; i++) {

        for (int j = 0; j < adj[i].size(); j++) {

            indegree[adj[i][j]]++;
        }
    }

    queue<int> q;

    for (int i = 0; i < numCourses; i++) {

        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> ans;

    while (!q.empty()) {

        int node = q.front();
        q.pop();

        ans.push_back(node);

        for (int i = 0; i < adj[node].size(); i++) {

            int adjNode = adj[node][i];

            indegree[adjNode]--;

            if (indegree[adjNode] == 0) {
                q.push(adjNode);
            }
        }
    }

    if (ans.size() != numCourses)
        return {};

    return ans;
}

int main() {

    int numCourses = 4;

    vector<vector<int>> prerequisites = {
        {1,0},
        {2,0},
        {3,1},
        {3,2}
    };

    vector<int> ans = findOrder(numCourses, prerequisites);

    for (int x : ans)
        cout << x << " ";
    

    return 0;
}