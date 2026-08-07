#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>>& grid, int sr, int sc){

    // for dfs
    int m=grid.size();
    int n=grid[0].size();

    // grid vis method 
    grid[sr][sc]='#';

    int dr[]={-1,1,0,0};
    int dc[]={0,0,-1,1};
    for(int i=0; i<4; i++){
        int nr=sr+dr[i];
        int nc=sc+dc[i];
        if(nr>=0 && nr< m && nc>=0 && nc<n && grid[nr][nc]=='O'){
            // dfs
            dfs(grid, nr, nc);
        }
    }
}

void floodFill(vector<vector<char>>& grid){
    int m = grid.size();
    int n = grid[0].size();

    // YE DO CHECKER BHI NESTED LOOP BNN SKTE HE LEKIN HECTIC(CONDITION KI VJH SE) NA DIKHE ISLIYE ALG ALG LIKHA 
    for(int i=0; i<m; i++){
        if(grid[i][0]=='O'){
            dfs(grid, i, 0);
        }
        if(grid[i][n-1]=='O'){
            dfs(grid, i, n-1);
        }
    }
    for(int i=0; i<n; i++){
        if(grid[0][i]=='O'){
            dfs(grid, 0, i);
        }
        if(grid[m-1][i]=='O'){
            dfs(grid, m-1, i);
        }
    }

    // grid me nested loops ata and vis nhi ata unlike provinces one 
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j]=='#'){
                // dfs(grid, i, j);
                grid[i][j]='O';
            }
            else if(grid[i][j]=='O'){
                grid[i][j]='X';
            }
        }
    }

    // dfs(grid);
}

int main(){

vector<vector<char>> grid = {
   {'X','X','X','X'},
    {'X','O','O','X'},
    {'X','X','O','X'},
    {'X','O','X','X'}
};
    floodFill(grid);

    for(auto i:grid){
        for(auto d:i){
            cout<<d<<" ";
        }
        cout<<endl;
    }
}