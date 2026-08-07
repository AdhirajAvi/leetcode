#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {3,2,3};
    // int a= ceil(nums.size()/2.0);
    int a=nums.size()/2;
    unordered_map<int,int> mpp;

    for(auto i:nums){
        mpp[i]++;
    }

    for(auto j:mpp){
        if(j.second>a){
            cout<<j.first<<endl;
        }
    }
}