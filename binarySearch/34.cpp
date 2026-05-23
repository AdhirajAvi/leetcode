#include<bits/stdc++.h>
using namespace std;

// approach-1!!!!!!!!
// int binarySearch(vector<int>& nums, int target){
//     int low = 0;
//     int high = nums.size() - 1;
//     while(low <= high){
//         int mid = low + (high - low) / 2;
//         if(nums[mid] == target){
//             return mid;
//         }
//         else if(nums[mid] < target){
//             low = mid + 1;
//         }
//         else{
//             high = mid - 1;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int> nums = {5,7,7,8,8,10};
//     int target = 8;
//     vector<int> nums2;
//     int resul=binarySearch(nums, target);
//     nums2.push_back(resul);
//     nums.erase(nums.begin() + resul);
//     resul=binarySearch(nums, target);
//     nums2.push_back(resul);
//     sort(nums2.begin(),nums2.end());
//     cout<<nums2[0]<<endl;
// }

// approach-2!!!!!!!!
// int binarySearch(vector<int>& nums, int target, vector<int>& nums2){
//     int low = 0;
//     int high = nums.size() - 1;
//     while(low <= high){
//         int mid = low + (high - low) / 2;
//         // if(find(nums2.begin(), nums2.end(), mid) != nums2.end()){
//         //     mid=mid+1;
//         // }
//         if(nums[mid-1]==target){
//             while(nums[mid-1]!=target){
//                 mid=mid-1;
//             }
//         }
//         else if(nums[mid+1]==target){
//             while(nums[mid-1]!=target){
//                 mid=mid+1;
//             }
//         }
//         else if(nums[mid] == target){
//             return mid;
//         }
//         else if(nums[mid] < target){
//             low = mid + 1;
//         }
//         else{
//             high = mid - 1;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int> nums = {3,3,3};
//     int target = 3;
//     vector<int> nums2;
//     int resul=binarySearch(nums, target, nums2);
//     nums2.push_back(resul);
//     resul=binarySearch(nums, target, nums2);
//     nums2.push_back(resul);
//     sort(nums2.begin(),nums2.end());
//     cout<<nums2[0]<<endl;
// }

// approach-3(cureated approach-2)!!!!!!!!
// vector<int> binarySearch(vector<int>& nums, int target){
//     int low = 0;
//     int high = nums.size() - 1;
//     while(low <= high){
//         int mid = low + (high - low) / 2;
//         if(nums[mid] == target){
//             int first = mid;
//             int last = mid;
//             // move left
//             while(first > 0 && nums[first-1] == target){
//                 first--;
//             }
//             // move right
//             while(last < nums.size()-1 && nums[last+1] == target){
//                 last++;
//             }
//             return {first,last};
//         }
//         else if(nums[mid] < target){
//             low = mid + 1;
//         }
//         else{
//             high = mid - 1;
//         }
//     }
//     return {-1,-1};
// }
// int main(){
//     vector<int> nums = {5,7,7,8,8,10};
//     int target = 8;
//     vector<int> ans = binarySearch(nums, target);
//     cout << ans[0] << " " << ans[1];
// }

// approach-4(better than approach-3)!!!!!!!!
int firstOcc(vector<int>& nums, int target){

    int low = 0;
    int high = nums.size()-1;

    int ans = -1;

    while(low <= high){

        int mid = low + (high-low)/2;

        if(nums[mid] == target){
            ans = mid;
            high = mid - 1;
        }

        else if(nums[mid] < target){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }

    return ans;
}

int lastOcc(vector<int>& nums, int target){

    int low = 0;
    int high = nums.size()-1;

    int ans = -1;

    while(low <= high){

        int mid = low + (high-low)/2;

        if(nums[mid] == target){
            ans = mid;
            low = mid + 1;
        }

        else if(nums[mid] < target){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }

    return ans;
}

vector<int> searchRange(vector<int>& nums, int target){

    return {firstOcc(nums,target),
            lastOcc(nums,target)};
}

int main(){

    vector<int> nums = {5,7,7,8,8,10};

    int target = 8;

    vector<int> ans = searchRange(nums, target);

    cout << ans[0] << " " << ans[1];
}