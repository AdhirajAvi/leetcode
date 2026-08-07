#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& isConnected, vector<int> &vis, int node){
    vis[node]=1;
    for(int i=0; i<isConnected[node].size(); i++){
        if(isConnected[node][i]==1 && !vis[i]){
            dfs(isConnected, vis, i);
        }
    }
}

int provinces(vector<vector<int>>& isConnected){
    int n=isConnected.size();
    
    vector<int> vis(n,0);
    int counter=0;

    for(int i=0; i<n; i++){
        if(!vis[i]){
            counter++;
            dfs(isConnected, vis, i);
        }
    }
    // counter++;
    return counter;
}

int main(){

    return 0;
}