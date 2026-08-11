// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int m=matrix.size();
//         int n=matrix[0].size();

//         int left=0;
//         int right=n-1;
//         int top=0;
//         int bottom=m-1;

//         vector<int> result;

//         for(int i=0;i<m;i++){
//             while(left<=right){
//                 result[k]=matrix[top][left];
//                 k++;
//                 left++;
//             }
//             while(top<=bottom){
//                 result[k]=matrix[top][right];
//                 k++;
//                 top++;
//             }
//             while
//         }
//     }
// };

#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{

    int m = matrix.size();
    int n = matrix[0].size();

    int left = 0;
    int right = n - 1;
    int top = 0;
    int bottom = m - 1;

    vector<int> result;

    while (top <= bottom && left <= right)
    {

        // left -> right
        for (int j = left; j <= right; j++)
        {
            result.push_back(matrix[top][j]);
        }
        top++;

        // top -> bottom
        for (int i = top; i <= bottom; i++)
        {
            result.push_back(matrix[i][right]);
        }
        right--;

        // right -> left
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                result.push_back(matrix[bottom][j]);
            }
            bottom--;
        }

        // bottom -> top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return result;
}

int main()
{

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<int> result = spiralOrder(matrix);

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}