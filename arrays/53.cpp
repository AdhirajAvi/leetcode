#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,3};
    int sum=INT_MIN;
    // vector<int> nums2;
    for(auto it=nums.begin();it!=nums.end();it++){
        for(auto it2=it;it2!=nums.end();it2++){
           vector<int> nums2(it,it2+1);
           int sum1=accumulate(nums2.begin(),nums2.end(),0);
           if(sum1>sum){
            sum=sum1;
           }
    }
    }
    cout<<sum<<endl;
    return 0;
}
