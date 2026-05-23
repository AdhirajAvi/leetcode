#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> nums2;
    vector<int> nums3;
    for (int i = 0; i < nums.size(); i++)
    {
        // int j=i;
        if (nums[i] == 0)
        {
            nums3.push_back(0);
            // nums.erase(nums.begin()+i);
            // nums.insert(nums.end(), 0);
            // i=j-1;
        }
        else
        {
            nums2.push_back(nums[i]);
        }
    }
    nums2.insert(nums2.end(), nums3.begin(), nums3.end());
    for (auto it : nums2)
    {
        cout << it << " ";
    }
    return 0;
}
