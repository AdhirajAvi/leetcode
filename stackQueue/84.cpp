#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestRectangleArea(vector<int>& heights) {

    stack<int> st;

    vector<int> markk(heights.size());
    vector<int> markk2(heights.size());

    // Previous Smaller Element
    for (int i = 0; i < heights.size(); i++) {

        while (!st.empty() && heights[i] <= heights[st.top()]) {
            st.pop();
        }

        if (st.empty()) {
            markk[i] = -1;
        }
        else {
            markk[i] = st.top();
        }

        st.push(i);
    }

    while (!st.empty()) {
        st.pop();
    }

    // Next Smaller Element
    for (int i = heights.size() - 1; i >= 0; i--) {

        while (!st.empty() && heights[i] <= heights[st.top()]) {
            st.pop();
        }

        if (st.empty()) {
            markk2[i] = heights.size();
        }
        else {
            markk2[i] = st.top();
        }

        st.push(i);
    }

    int area = 0;

    for (int j = 0; j < heights.size(); j++) {

        int width = markk2[j] - markk[j] - 1;
        int height = heights[j];

        area = max(area, width * height);
    }

    return area;
}

int main() {

    vector<int> heights = {2, 1, 5, 6, 2, 3};

    int ans = largestRectangleArea(heights);

    cout << "Largest Rectangle Area = " << ans << endl;

    return 0;
}