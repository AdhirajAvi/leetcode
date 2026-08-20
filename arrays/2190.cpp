#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {

    vector<int> ansPos;
    vector<int> ansNeg;

    for (int i = 0; i < nums.size(); i++) {

        if (nums[i] > 0) {
            ansPos.push_back(nums[i]);
        }
        else {
            ansNeg.push_back(nums[i]);
        }
    }

    vector<int> ans;

    for (int i = 0, j = 0;
         i < ansPos.size() && j < ansNeg.size();
         i++, j++) {

        ans.push_back(ansPos[i]);
        ans.push_back(ansNeg[j]);
    }

    return ans;
}

int main() {

    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> ans = rearrangeArray(nums);

    cout << "Rearranged Array: ";

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}