#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,3};

    stack<int> st;
    int n=nums.size();
    vector<int> ans1(n);
    vector<int> ans2;
    
     for (int i =nums.size()-1; i>=0; i--) {
        while (!st.empty() && nums[st.top()] < nums[i]) {
            st.pop();
        }
        if (st.empty()) {
            ans1[i]=n;
        } else {
            ans1[i]=st.top();
        }
        st.push(i);
    }

    while(!st.empty()){
        st.pop();
    }

    for (int i =0; i<nums.size(); i++) {
        while (!st.empty() && nums[st.top()] <= nums[i]) {
            st.pop();
        }
        if (st.empty()) {
            ans2.push_back(-1);
        } else {
            ans2.push_back(st.top());
        }
        st.push(i);
    }

    long long resul=0;
    for(int j=0;j<ans2.size();j++){
        long long left = j - ans2[j];
        long long right = ans1[j] - j;

        resul+=1LL*nums[j]*left*right;
    }

    while(!st.empty()){
        st.pop();
    }



    ans1.clear();
    ans2.clear();
    ans1.resize(n);

    for (int i =nums.size()-1; i>=0; i--) {
        while (!st.empty() && nums[st.top()] > nums[i]) {
            st.pop();
        }
        if (st.empty()) {
            ans1[i]=n;
        } else {
            ans1[i]=st.top();
        }
        st.push(i);
    }

    while(!st.empty()){
        st.pop();
    }

    for (int i =0; i<nums.size(); i++) {
        while (!st.empty() && nums[st.top()] >= nums[i]) {
            st.pop();
        }
        if (st.empty()) {
            ans2.push_back(-1);
        } else {
            ans2.push_back(st.top());
        }
        st.push(i);
    }

    long long minresul=0;
    for(int j=0;j<ans2.size();j++){
        long long left = j - ans2[j];
        long long right = ans1[j] - j;

        minresul+=1LL*nums[j]*left*right;
    }

    long long finalResul=resul-minresul;
    cout<<finalResul<<endl;
    return 0;
}