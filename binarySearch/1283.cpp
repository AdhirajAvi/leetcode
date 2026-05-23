#include<bits/stdc++.h>
using namespace std;

bool smallestDivisor(vector<int> &nums, int &threshold, int &mid){
    int i=0;
    int newSummed=0;
    while(i<nums.size()){
        int k=ceil((float)nums[i]/mid);
        newSummed+=k;
        i++; 
    }
    return newSummed<=threshold;
}

int search(vector<int>& nums, int &threshold) {

    int low= 1;
    int high = *max_element(nums.begin(), nums.end());

    while(low < high){
        int mid = low + (high - low) / 2;
        if(smallestDivisor(nums, threshold, mid)){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}

int main(){
    vector<int> nums = {1,2,5,9};
    int threshold = 6;
    int ans = search(nums, threshold);
    cout << ans;
    return 0;
}


