#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>>& grid, int sr, int sc){

    // for dfs
    int m=grid.size();
    int n=grid[0].size();

    // grid vis method 
    grid[sr][sc] = '0';

    int dr[]={-1,1,0,0};
    int dc[]={0,0,-1,1};
    for(int i=0; i<4; i++){
        int nr=sr+dr[i];
        int nc=sc+dc[i];
        if(nr>=0 && nr< m && nc>=0 && nc<n && grid[nr][nc]=='1'){
            // dfs
            dfs(grid, nr, nc);
        }
    }
}

int floodFill(vector<vector<char>>& grid){
    int m = grid.size();
    int n = grid[0].size();

    int counter=0;
    // grid me nested loops ata and vis nhi ata unlike provinces one 
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j]=='1'){
                counter++;
                dfs(grid, i, j);
            }
        }
    }

    // dfs(grid);

    return counter;
}

int main(){

vector<vector<char>> grid = {
  {'1','1','1','1','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'}
    };
    int result=floodFill(grid);
    cout<<result<<endl;
}