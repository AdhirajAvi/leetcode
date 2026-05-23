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

    return nums[low];
}

int binarySearch2(vector<int>& nums, int target){

    int low = 0;
    int high = nums.size() - 1;
    int mid;

    while(low <= high){

        mid = low + (high - low) / 2;

        if(nums[mid] == target){
            return mid;
        }

        else if(nums[mid] < target){
            low = mid+1;
        }

        else if(nums[mid]>target){
            high = mid-1;
        }
    }
    // int k;
    // if(nums[low]<target){
    //     k=nums[low];
    // }
    // else{
    //     k=-1;
    // }

    // return k;
    if(high >= 0){
        return nums[high];
    }

    return -1;

}

int main(){

    vector<int> nums ={3, 4, 6, 7, 8, 10};
    int x= 5;

    cout<<binarySearch2(nums,x)<<" "<<binarySearch(nums, x)<<endl;

}