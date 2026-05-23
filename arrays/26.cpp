#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,1,2};
    vector<int> nums2;
    for(auto it=nums.begin();it!=nums.end();it++){
        auto it2 = find(nums2.begin(), nums2.end(), *it);
        if(it2 == nums2.end()) {
            nums2.push_back(*it);
        }
    }
    for(auto it3:nums2){
        cout<<it3<<" ";
    }
    return 0;
}
