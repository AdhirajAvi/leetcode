#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixFunc(vector<vector<int>> &matrix){
    int m=matrix.size();
    int n=matrix[0].size();

    queue<pair<int, int>> q;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==0){
            q.push({i, j});
            }
            else{
                matrix[i][j]=-1;
            }
        }
    }

    int dr[]={-1,1,0,0};
    int dc[]={0,0,-1,1};

    while(!q.empty()){
        // auto [sr, sc]=q.front();
        int sr = q.front().first;
        int sc = q.front().second;
        q.pop();

        for(int d=0; d<4; d++){
            int nr=sr+dr[d];
            int nc=sc+dc[d];

            if(nr>=0 && nr<m && nc>=0 && nc<n && matrix[nr][nc]==-1){
                matrix[nr][nc]=matrix[sr][sc]+1;
                q.push({nr, nc});
            }
        }
    }
    return matrix;
}

int main(){

vector<vector<int>> matrix = {{0,0,0},
    {0,1,0},
    {0,0,0}
};
vector<vector<int>> result=matrixFunc(matrix);

for(auto i:result){
    for(auto d:i){
        cout<<d<<" ";
    }
    cout<<endl;
}
}