#include <bits/stdc++.h>
using namespace std;

int matrixFunc(vector<vector<int>> &matrix){
    int m=matrix.size();
    int n=matrix[0].size();

    queue<pair<int, int>> q;
    int fres=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==2){
            q.push({i, j});
            }
        
        
            else if(matrix[i][j]==1){
                fres++;
            }


        }
    }

    int dr[]={-1,1,0,0};
    int dc[]={0,0,-1,1};


    int minutes = 0;


    while(!q.empty()){
        // auto [sr, sc]=q.front();


        int size = q.size();
        while(size--) {


        int sr = q.front().first;
        int sc = q.front().second;
        q.pop();

        for(int d=0; d<4; d++){
            int nr=sr+dr[d];
            int nc=sc+dc[d];

            if(nr>=0 && nr<m && nc>=0 && nc<n && matrix[nr][nc]==1){
                matrix[nr][nc]=2;
                fres--;
                q.push({nr, nc});
            }
        }
        }
        if(!q.empty())
                minutes++;
    }
    if (fres == 0) {
    return minutes;
} else {
    return -1;
}
}

int main(){

vector<vector<int>> matrix = {   {2,1,1},
    {1,1,0},
    {0,1,1}
};
int result=matrixFunc(matrix);

cout<<result<<endl;
}