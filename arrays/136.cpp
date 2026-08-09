#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    unordered_map<int, int> mpp;

    for (int i = 0; i < nums.size(); i++) {
        mpp[nums[i]]++;
    }

    for (auto i : mpp) {
        if (i.second == 1) {
            return i.first;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    cout << singleNumber(nums) << endl;

    return 0;
}