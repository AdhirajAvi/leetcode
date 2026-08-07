// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> nums1 = {4,1,2};
//     vector<int> nums2 = {1,3,4,2};

//     stack<int> s1;
//     unordered_map<int,int> mpp;

//     for(int i=nums2.size()-1;i>0;i--){
//         if(!s1.empty() && s1.top()<=nums2[i]){
//             s1.pop();
//         }
//         else{
//             if(!s1.empty()){
//                 mpp[nums2[i]]=s1.top();
//                 s1.push(nums2[i]);
//             }
//             else{
//                 mpp[nums2[i]]=-1;
//                 s1.push(nums2[i]);
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    stack<int> st;
    unordered_map<int, int> mpp;
    // Find Next Greater Element for every element in nums2
    for (int i = nums2.size() - 1; i >= 0; i--) {


        while (!st.empty() && st.top() <= nums2[i]) {


            st.pop();
        }
        if (st.empty()) {
            mpp[nums2[i]] = -1;
        } else {
            mpp[nums2[i]] = st.top();
        }
        st.push(nums2[i]);
    }

    // Build answer for nums1
    vector<int> ans;
    for (int num : nums1) {
        ans.push_back(mpp[num]);
    }
    // Print answer
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}