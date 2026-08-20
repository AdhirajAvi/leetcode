#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {

    int m = matrix.size();
    int n = matrix[0].size();

    int low = 0;
    int high = n - 1;

    while (low <= m - 1 && high >= 0) {

        if (matrix[low][high] == target) {
            return true;
        }

        else if (matrix[low][high] < target) {
            low++;
        }

        else {
            high--;
        }
    }

    return false;
}

int main() {

    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    int target = 5;

    bool ans = searchMatrix(matrix, target);

    if (ans) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}