// IF TIME THEN ONLY DO IT!!!!!!!!

// #include <bits/stdc++.h>
// using namespace std;

// string findOrder(string dict[], int N, int K) {

//     vector<int> adj[K];

//     // Build Graph
//     for (int i = 0; i < N - 1; i++) {

//         string s1 = dict[i];
//         string s2 = dict[i + 1];

//         int len = min(s1.size(), s2.size());

//         for (int j = 0; j < len; j++) {

//             if (s1[j] != s2[j]) {

//                 adj[s1[j] - 'a'].push_back(s2[j] - 'a');
//                 break;
//             }
//         }
//     }

//     // Calculate Indegree
//     vector<int> indegree(K, 0);

//     for (int i = 0; i < K; i++) {
//         for (auto adjNode : adj[i]) {
//             indegree[adjNode]++;
//         }
//     }

//     // Initialize Queue
//     queue<int> q;

//     for (int i = 0; i < K; i++) {
//         if (indegree[i] == 0)
//             q.push(i);
//     }

//     string ans = "";

//     // Kahn's Algorithm
//     while (!q.empty()) {

//         int node = q.front();
//         q.pop();

//         ans.push_back(node + 'a');

//         for (auto adjNode : adj[node]) {

//             indegree[adjNode]--;

//             if (indegree[adjNode] == 0)
//                 q.push(adjNode);
//         }
//     }

//     if (ans.size() != K)
//         return "";

//     return ans;
// }

// int main() {

//     int N = 5;
//     int K = 4;

//     string dict[] = {
//         "baa",
//         "abcd",
//         "abca",
//         "cab",
//         "cad"
//     };

//     cout << "Alien Order : ";
//     cout << findOrder(dict, N, K);

//     return 0;
// }