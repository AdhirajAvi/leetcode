#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {

    int m = matrix.size();
    int n = matrix[0].size();

    // Transpose
    for(int i = 0; i < n - 1; i++) {
        // for(int j=1;j<n;j++){
        // ek baar shi swap hua lekin phir swap hogya, original me hi wapas bdl gya hence no use
        for(int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse every row
    for(int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate(matrix);

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}