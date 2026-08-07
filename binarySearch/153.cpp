#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    int low = 0;
    int high = nums.size() - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] > nums[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    return nums[low];
}
