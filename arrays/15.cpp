// brute is in leetCode!!!!!!!!

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {

    vector<vector<int>> result;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {

        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int j = i + 1;
        int k = nums.size() - 1;

        int sum = 0;

        while (j < k) {

            sum = nums[i] + nums[j] + nums[k];

            if (sum == 0) {

                result.push_back({nums[i], nums[j], nums[k]});

                j++;
                k--;

                while (j < k && nums[j] == nums[j - 1]) {
                    j++;
                }

                while (j < k && nums[k] == nums[k + 1]) {
                    k--;
                }
            }

            else if (sum < 0) {
                j++;
            }

            else {
                k--;
            }
        }
    }

    return result;
}

int main() {

    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = threeSum(nums);

    cout << "Triplets:" << endl;

    for (int i = 0; i < ans.size(); i++) {

        cout << "[ ";

        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}