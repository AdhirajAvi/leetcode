#include <bits/stdc++.h>
using namespace std;

void filler(vector<vector<int>>& image, int sr, int sc, int color, int oldColor){

    // for dfs
    int m=image.size();
    int n=image[0].size();

    image[sr][sc]=color;

    int dr[]={-1,1,0,0};
    int dc[]={0,0,-1,1};
    for(int i=0; i<4; i++){
        int nr=sr+dr[i];
        int nc=sc+dc[i];
        if(nr>=0 && nr< m && nc>=0 && nc<n && image[nr][nc]==oldColor){
            // dfs
            filler(image, nr, nc, color, oldColor);
        }
    }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color){
    // vector<vector<int>> image = {{1,1,1},{1,1,0},{1,0,1}};
    // int sr = 1;
    // int sc = 1; 
    // int color = 2;
    int oldColor=image[sr][sc];

    // extra case
    // if (oldColor == color){
    //     return image;
    // }
    // or
    if (oldColor != color){
    filler(image, sr, sc, color, oldColor);
    }
    return image;
}

int main(){

    vector<vector<int>> image = {{1,1,1},{1,1,0},{1,0,1}};
    int sr = 1;
    int sc = 1; 
    int color = 2;

    vector<vector<int>> result=floodFill(image, sr, sc, color);
    for(auto i:result){
        for(auto d:i){
            cout<<d<<" ";
        }
        cout<<endl;
    }
}


// // bfsMethod!!!!!!!!
// void filler(vector<vector<int>>& image, int sr, int sc, int color, int oldColor){

//     // here outside
//     int m=image.size();
//     int n=image[0].size();

//     int oldColor=image[sr][sc];

//     // extra case
//     if (oldColor == color){
//         return image;
//     }

//     queue<pair<int, int> q;
//     q.push(sr, sc);
//     image[sr][sc]=color;
//     int dr[]={-1,1,0,0};
//     int dc[]={0,0,-1,1};

//     // extra bfs
//         while (!q.empty()) {

//             auto [r, c] = q.front();
//             q.pop();

//     for(int i=0; i<4; i++){
//         int nr=sr+dr[i];
//         int nc=sc+dc[i];
//         if(nr>=0 && nr< m && nc>=0 && nc<n && image[nr][nc]==oldColor){
//             // bfs
//             image[nr][nc]=color;
//             q.push({nr, nc});
//         }
//     }
// }