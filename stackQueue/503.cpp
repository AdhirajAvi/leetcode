// #include <bits/stdc++.h>
// using namespace std;

// map way
// int main() {
//     vector<int> nums = {1,2,1};
//     stack<int> st;
//     unordered_map<int, int> mpp;
//     int n=nums.size();
//    for(int i = 2*n-1; i >= 0; i--) {


//         while (!st.empty() && st.top() <= nums[i%n]) {


//             st.pop();
//         }
//         if (st.empty()) {
//             mpp[i%n] = -1;
//         } else {
//             mpp[i%n] = st.top();
//         }
//         st.push(nums[i%n]);
//     }

//     // correct map traversal
//     for(int i = 0; i < n; i++) {
//         cout << mpp[i] << " ";
//     }

//     // wrong map traversal
//     // vector<int> ans;
//     // for (int num : mpp.second()) {
//     //     ans.push_back(mpp[num]);
//     // }
//     // for (int x : ans) {
//     //     cout << x << " ";
//     // }

//     return 0;
// }

// array way
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,1};

    int n = nums.size();
    stack<int> st;
    vector<int> ans(n);

    for(int i = 2*n - 1; i >= 0; i--) {

        while(!st.empty() && st.top() <= nums[i % n]) {
            st.pop();
        }

        if(st.empty()) {
            ans[i % n] = -1;
        }
        else {
            ans[i % n] = st.top();
        }

        st.push(nums[i % n]);
    }

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}