#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int>& nums, int target){

    int low = 0;
    int high = nums.size() - 1;
    int mid;

    while(low <= high){

        mid = low + (high - low) / 2;

        if(nums[mid] == target){
            return true;
        }

        else if(nums[mid] < target){
            low = mid + 1;
        }

        else if(nums[mid]>target){
            high = mid-1;
        }
    }

    if(high==-1){
        high=0;
    }
    if(nums[high]==target){
        return true;
    }
    else{
        return false;
    }
    
}

int main(){

    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 3;

    cout<<binarySearch(nums, target)<<endl;

}