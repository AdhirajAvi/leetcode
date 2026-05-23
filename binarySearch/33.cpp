#include<bits/stdc++.h>
using namespace std;

// approach-1(optimal but bad code writing)!!!!!!!!
// int binarySearchpivot(vector<int> &nums){
//     int low=0;
//     int high=nums.size()-1;
//     while(low<high){
//         int mid=low+(high-low)/2;
//         // if(mid+1<nums.size() && nums[mid]>nums[mid-1]){
//         //     low=mid+1;
//         // }
//         if(mid+1<nums.size() && nums[mid]>nums[high]){
//             low=mid+1;
//         }
//         else{
//             // high=mid-1;
//             high=mid;
//         }
//     }
//     return low;
// }

// int binarySearchleft(vector<int> &nums, int &target, int &resul){
//     int low=0;
//     int high=(nums.size()-resul)-1;
//     while(low<high){
//         int mid=low+(high-low)/2;
//         if(nums[mid]==target){
//             return mid;
//         }
//         else if(nums[mid]<target){
//             low=mid+1;
//         }
//         else{
//             // high=mid-1;
//             high=mid-1;
//         }
//     }
//     return -1;
// }

// int binarySearchright(vector<int> &nums, int &target, int &resul){
//     int low=(nums.size()-resul);
//     int high=nums.size()-1;
//     while(low<high){
//         int mid=low+(high-low)/2;
//         if(nums[mid]==target){
//             return mid;
//         }
//         else if(nums[mid]<target){
//             low=mid+1;
//         }
//         else{
//             // high=mid-1;
//             high=mid-1;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> nums = {4,5,6,7,0,1,2};
//     int target = 0;
//     int resul=binarySearchpivot(nums);
//     int resul1=binarySearchleft(nums,target,resul);
//     int resul2=binarySearchright(nums,target,resul);
//     cout<<resul2<<endl;
//     return 0;    
// }

// approach-2!!!!!!!!
int search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(nums[mid] == target){
            return mid;
        }
        // Left half sorted
        if(nums[low] <= nums[mid]){
            if(target >= nums[low] && target < nums[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        // Right half sorted
        else{
            if(target > nums[mid] && target <= nums[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    int ans = search(nums, target);
    cout << ans;
    return 0;
}