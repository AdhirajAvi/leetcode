#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int calcArea(vector<int>& ansRow, int i, int n) {

    stack<int> st;

    vector<int> markk(n);
    vector<int> markk2(n);

    // Previous Smaller Element
    for (int j = 0; j < n; j++) {

        while (!st.empty() && ansRow[j] <= ansRow[st.top()]) {
            st.pop();
        }

        if (st.empty()) {
            markk[j] = -1;
        }
        else {
            markk[j] = st.top();
        }

        st.push(j);
    }

    while (!st.empty()) {
        st.pop();
    }

    // Next Smaller Element
    for (int j = n - 1; j >= 0; j--) {

        while (!st.empty() && ansRow[j] <= ansRow[st.top()]) {
            st.pop();
        }

        if (st.empty()) {
            markk2[j] = n;
        }
        else {
            markk2[j] = st.top();
        }

        st.push(j);
    }

    int maxiAnsrowarea = 0;

    for (int j = 0; j < ansRow.size(); j++) {

        int width = markk2[j] - markk[j] - 1;
        int height = ansRow[j];

        maxiAnsrowarea = max(maxiAnsrowarea, width * height);
    }

    return maxiAnsrowarea;
}

int maximalRectangle(vector<vector<char>>& matrix) {

    int m = matrix.size();
    int n = matrix[0].size();

    int maxi = 0;

    vector<int> ansRow(n);

    for (int i = 0; i < m; i++) {

        for (int j = 0; j < n; j++) {

            if (matrix[i][j] != '0') {
                ansRow[j]++;
            }
            else {
                ansRow[j] = 0;
            }
        }

        maxi = max(maxi, calcArea(ansRow, i, n));
    }

    return maxi;
}

int main() {

    vector<vector<char>> matrix = {
        {'1', '0', '1', '0', '0'},
        {'1', '0', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '0', '0', '1', '0'}
    };

    int ans = maximalRectangle(matrix);

    cout << "Maximum Rectangle Area = " << ans << endl;

    return 0;
}