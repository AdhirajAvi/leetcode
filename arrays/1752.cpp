#include <bits/stdc++.h>
using namespace std;

int main()
{   
    // approach-1!!!!!!!!
    //     for(int i=1;i<nums.size()-1;i++){
    //     if((nums[i-1]>nums[i]) && (nums[i]<nums[i+1]) && (nums[i-1]<=nums[i+1])){
    //         return false;      
    //     }    
    //     }return true;
    // }

    // approach-2!!!!!!!!
    // vector<int> nums = {2, 1, 3, 4};

    // vector<int> nums2 = nums;
    
    // sort(nums2.begin(), nums2.end());
    // for (auto it = nums2.begin(); it != nums2.end(); it++)
    // {
    //     rotate(nums2.begin(), it, nums2.end());
    //     if(nums2==nums){
    //         cout<<true<<endl;
    //         break;
    //     }
    // }

    // approach-3!!!!!!!!
    vector<int> nums = {2, 1, 3, 4};
    vector<int> nums2 = nums;
    sort(nums2.begin(), nums2.end());
    for (auto it = nums2.begin(); it != nums2.end(); it++)
    {

        vector<int> temp = nums2; // fresh copy

        rotate(temp.begin(), it, temp.end());
        if(temp==nums){
            cout<<true<<endl;
            break;
        }
    }
    return 0;
    }

