#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {4, 1, 2};
    int n=nums.size();
    vector<int> ans1(n); 
    vector<int> ans2(n);    
    // vector<int> ans2;  
    // vector<int> ans1(n,nums[nums.size()-1]); 
    // vector<int> ans2(n,nums[0]);               
    stack<int> st;
    for (int i = nums.size() - 1; i >= 0; i--) {


        // one will have equal sign in while loop like below for duplicates
        while (!st.empty() && nums[st.top()] > nums[i]) {


            st.pop();
        }
        if (st.empty()) {
            ans1[i] = n;
        } else {
            ans1[i] = st.top();
        }
        st.push(i);
    }
    while(!st.empty()){
        st.pop();
    }

    for (int i = 0; i <= nums.size()-1; i++) {


        while (!st.empty() && nums[st.top()] >= nums[i]) {


            st.pop();
        }
        if (st.empty()) {
            ans2[i] = -1;
        } else {
            ans2[i] = st.top();
        }
        st.push(i);
    }

    long long resul = 0;
    int mod = 1e9 + 7;
    // int resul=0;
    for(int i=0,j=0;j<ans2.size();i++,j++){
        long long left = j - ans2[j];
        long long right = ans1[i] - i;
        
        // more safer
        resul = (resul + (1LL * nums[i] * left * right) % mod) % mod;
        // resul+=nums[i]*(ans1[i]-i)*(j-ans2[j]);

        // or

        // resul = resul + (1LL * nums[i] * left * right);
        // resul = resul % mod;
    }
    cout<<resul<<endl;
}

