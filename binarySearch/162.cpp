#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums){
    int low=0;
    int high=nums.size()-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if(mid+1<nums.size() && nums[mid]<nums[mid+1]){
            low=mid+1;
        }
        else{
            // high=mid-1;
            high=mid;
        }
    }
    return low;
}


int main(){
    vector<int> nums = {1,2,3,1};
    int resul=binarySearch(nums);
    cout<<resul<<endl;
    return 0;    
}