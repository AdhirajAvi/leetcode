// #include<bits/stdc++.h>
// using namespace std;

// // int binarySearch(vector<int> &nums){
// //     int low=0;
// //     int high=nums.size()-1;
// //     int mid=low+(high-low)/2;
// //     // vector<int> nums1
// //     if(mid%2==0){
// //         high
// //     }
// //     while(low<high){
// //     }
// // }


// // int main(){
// //     vector<int> nums = {1,1,2,3,3,4,4,8,8};
// //     int resul=binarySearch(nums);
// //     cout<<resul<<endl;
// //     return 0;
// // }````


// #include<bits/stdc++.h>
// using namespace std;

// int binarySearch(vector<int>& nums){

//     int low = 0;
//     int high = nums.size() - 1;
//     int ans=0;

//     while(low <= high){

//         int mid = low + (high - low) / 2;

//         if(mid%2!=0 && (nums.size()-mid)%2!=0){
//             return mid;
//         }
//         // if(mid%2!=0 && (nums.size()-mid)%2!=0){
//         //     return mid;
//         // }

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

//     vector<int> nums = {1,1,2,3,3,4,4,8,8};
//     cout << binarySearch(nums);

// }


#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    unordered_map<int, int> mpp;

    for (int i = 0; i < nums.size(); i++) {
        mpp[nums[i]]++;
    }

    for (auto it : mpp) {
        if (it.second == 1) {
            cout << it.first;
            break;
        }
    }

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int singleNonDuplicate(vector<int>& nums) {

//     int n = nums.size();

//     if (n == 1)
//         return nums[0];

//     if (nums[0] != nums[1])
//         return nums[0];

//     if (nums[n - 1] != nums[n - 2])
//         return nums[n - 1];

//     int low = 1;
//     int high = n - 2;

//     while (low <= high) {

//         int mid = low + (high - low) / 2;

//         if (nums[mid] != nums[mid - 1] &&
//             nums[mid] != nums[mid + 1])
//             return nums[mid];

//         if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) ||
//             (mid % 2 == 1 && nums[mid] == nums[mid - 1])) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }

//     return -1;
// }

// int main() {

//     vector<int> nums = {1,1,2,3,3,4,4,8,8};

//     cout << singleNonDuplicate(nums);

//     return 0;
// }