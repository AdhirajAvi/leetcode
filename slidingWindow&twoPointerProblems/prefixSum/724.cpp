// brute way!!!!!!!!
// #include <bits/stdc++.h>
// using namespace std;

// int pivotIndex(vector<int>& nums) {
//     vector<int> tempPref(nums.size(), nums[0]);
//     vector<int> tempSuff(nums.size(), nums[nums.size() - 1]);

//     for (int i = 1; i < tempPref.size(); i++) {
//         tempPref[i] = tempPref[i - 1] + nums[i];
//     }

//     for (int i = tempSuff.size() - 2; i >= 0; i--) {
//         tempSuff[i] = tempSuff[i + 1] + nums[i];
//     }

//     for (int j = 0; j < tempPref.size(); j++) {
//         if (tempPref[j] == tempSuff[j]) {
//             return j;
//         }
//     }

//     return -1;
// }

// int main() {
//     vector<int> nums = {1, 7, 3, 6, 5, 6};

//     cout << pivotIndex(nums);

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int total = 0;
    int leftSum = 0;

    for (auto j : nums) {
        total += j;
    }

    for (int i = 0; i < nums.size(); i++) {
        int rightSum = total - leftSum - nums[i];

        if (leftSum == rightSum) {
            return i;
        }

        leftSum += nums[i];
    }

    return -1;
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    cout << pivotIndex(nums) << endl;

    return 0;
}