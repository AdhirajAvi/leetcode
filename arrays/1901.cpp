#include <iostream>
#include <vector>
using namespace std;

vector<int> findPeakGrid(vector<vector<int>>& mat) {

    int m = mat.size();
    int n = mat[0].size();

    int low = 0;
    int high = n - 1;

    int maxiIdx = 0;

    while (low <= high) {

        int left = -1;
        int right = -1;

        int mid = low + (high - low) / 2;

        for (int i = 0; i < m; i++) {

            if (mat[i][mid] > mat[maxiIdx][mid]) {
                maxiIdx = i;
            }
        }

        if (mid - 1 >= 0) {
            left = mat[maxiIdx][mid - 1];
        }

        if (mid + 1 < n) {
            right = mat[maxiIdx][mid + 1];
        }

        if (mat[maxiIdx][mid] > left &&
            mat[maxiIdx][mid] > right) {

            return {maxiIdx, mid};
        }

        else if (mat[maxiIdx][mid] < mat[maxiIdx][mid - 1]) {
            high = mid - 1;
        }

        else {
            low = mid + 1;
        }
    }

    return {-1, -1};
}

int main() {

    vector<vector<int>> mat = {
        {10, 20, 15},
        {21, 30, 14},
        {7, 16, 32}
    };

    vector<int> ans = findPeakGrid(mat);

    cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}