#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {4, 1, 2};
    int n=nums.size();
    vector<int> ans(n);               
    stack<int> st;
    for (int i = nums.size() - 1; i >= 0; i--) {


        while (!st.empty() && st.top() >= nums[i]) {


            st.pop();
        }
        if (st.empty()) {
            ans[i] = -1;
        } else {
            ans[i] = st.top();
        }
        st.push(nums[i]);
    }
    for (int x : ans) {
        cout << x << " ";
    }
}

