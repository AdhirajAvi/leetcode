#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {

    int pref = 0;
    unordered_map<int, int> mpp;
    mpp[0] = 1;

    int counter = 0;

    for (int i = 0; i < nums.size(); i++) {

        pref += nums[i];

        int need = pref - k;

        if (mpp.find(need) != mpp.end()) {
            counter += mpp[need];
        }

        mpp[pref]++;
    }

    return counter;
}

int main() {

    vector<int> nums = {1, 2, 3};
    int k = 3;

    cout << subarraySum(nums, k);

    return 0;
}


// common way!!!!!!!!
// #include <bits/stdc++.h>
// using namespace std;

// int subarraySum(vector<int>& nums, int k) {

//     int pref = 0;
//     unordered_map<int, int> mpp;
//     mpp[0] = 1;

//     int counter = 0;

//     for (int i = 0; i < nums.size(); i++) {

//         pref += nums[i];

//         int need = pref - k;

//         counter += mpp[need];

//         mpp[pref]++;
//     }

//     return counter;
// }

// int main() {

//     vector<int> nums = {1, 2, 3};
//     int k = 3;

//     cout << subarraySum(nums, k);

//     return 0;
// }