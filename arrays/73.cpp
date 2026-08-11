// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {

//         int m=matrix.size();
//         int n=matrix[0].size();

//         // int markedI=0;
//         // int markedJ=0;

//         // vector<vector<int>>& temp(matrix[0].size());

//         vector<int> rows(m, 0);
//         vector<int> cols(n, 0);

//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(matrix[i][j]==0){
//                     // markedI=i;
//                     // markedJ=j;
//                     rows[i]=1;
//                     cols[j]=1;
//                 }
//             }
//         }

//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(rows[i]==1 || cols[j]==1){
//                     // markedI=i;
//                     // markedJ=j;
//                     matrix[i][j]=0;
//                 }
//             }
//         }

//     }
// };

#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{

    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> rows(m, 0);
    vector<int> cols(n, 0);

    // Mark rows and columns containing 0
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (matrix[i][j] == 0)
            {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }

    // Set marked rows and columns to 0
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (rows[i] == 1 || cols[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{

    vector<vector<int>> matrix = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}};

    setZeroes(matrix);

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}