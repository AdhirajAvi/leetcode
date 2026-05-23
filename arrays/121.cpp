#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {7,6,4,3,1};
    int sum=INT_MIN;
    // vector<int> nums2;
    for(auto it=nums.begin();it!=nums.end();it++){
        for(auto it2=it;it2!=nums.end();it2++){
           int sum1=*it2-*it;
           if(sum1>sum){
            sum=sum1;
           }
    }
    }
    cout<<sum<<endl;
    return 0;
}
