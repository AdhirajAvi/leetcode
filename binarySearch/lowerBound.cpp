#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int target){

    int low = 0;
    int high = nums.size() - 1;
    int mid;

    while(low <= high){

        mid = low + (high - low) / 2;

        if(nums[mid] == target){
            return mid;
        }

        else if(nums[mid] < target){
            low = mid + 1;
        }

        else if(nums[mid]>target){
            high = mid-1;
        }
    }

    return low;
}

int main(){

    vector<int> nums= {3,5,8,15,19};
    int x = 9;

    cout<<binarySearch(nums, x)<<endl;

}