#include <bits/stdc++.h>
using namespace std; 

bool bfs(vector<vector<int>>& graph, int i, vector<int> &vis){
    queue<int> q;

    // int node=
    q.push(i);
    vis[i]=0;
    while(!q.empty()){
        int node=q.front();
        q.pop();

        // for(int j=0;j<graph[0].size();j++){
        for(int j=0;j<graph[node].size();j++){
            int adj=graph[node][j];
            // if(vis[j]==-1){
            if(vis[adj]==-1){
                vis[adj]= !vis[node];
                q.push(adj);
            }
            else if (vis[adj] == vis[node]) {
                return false;
        }
    }
}
return true;
}

bool bipartite(vector<vector<int>>& graph){

    int size=graph.size();
    vector<int> vis(size, -1);

    // loop for visited checker only here 
    for(int i =0; i<size;i++){

        // same like no.of provinces

        // same condition 
        if(vis[i]==-1){
            // same call bss ye lga if ans !==gg false else true 
            if(!bfs(graph, i, vis)){
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector<vector<int>> graph={    {1,2,3},
    {0,2},
    {0,1,3},
    {0,2}
};
    bool result=bipartite(graph);
    cout<<result<<endl;
    return 0;
}


// dfs i prefer
// class Solution {
// public:

//     bool dfs(vector<vector<int>>& graph, int node, vector<int>& vis) {

//         for (int j = 0; j < graph[node].size(); j++) {

//             int adj = graph[node][j];

//             if (vis[adj] == -1) {

//                 vis[adj] = !vis[node];

//                 if (!dfs(graph, adj, vis)) {
//                     return false;
//                 }
//             }
//             else if (vis[adj] == vis[node]) {

//                 return false;
//             }
//         }

//         return true;
//     }

//     bool isBipartite(vector<vector<int>>& graph) {

//         int size = graph.size();

//         vector<int> vis(size, -1);

//         for (int i = 0; i < size; i++) {

//             if (vis[i] == -1) {

//                 vis[i] = 0;

//                 if (!dfs(graph, i, vis)) {

//                     return false;
//                 }
//             }
//         }

//         return true;
//     }
// };