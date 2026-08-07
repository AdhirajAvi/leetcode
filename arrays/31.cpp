#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3};
    int j=nums.size()-1;

    int idx=-1;
    // finding pivot the breaker
    for(int i=nums.size()-2;i>=0;i--){
        // if(nums[i]<nums[j]){
        if(nums[i]<nums[i+1]){
            idx=i;
            break;
        }
    }

    if(idx==-1){reverse(nums.begin(),nums.end());return 0;};

    // finding the greater element after breaker found 
    for(int j=nums.size()-1;j>=0;j++){
        if(nums[j]>nums[idx]){
            swap(nums[idx], nums[j]);
            break;
        }
    }

    // reverse full after idx to end, after swapping 
    reverse(nums.begin()+idx+1,nums.end());
    for(auto m:nums){
        cout<<m<<endl;
    }
}