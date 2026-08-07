#include <bits/stdc++.h>
using namespace std;

int main()
{
    // striver bfs method
    // vector<int> nums = {2, 3, 1, 1, 4};
    //     int jump = 0;
    //     int leftRange = 0;
    //     int rightRange = 0;
    //     int farthest = 0;
    //     while (rightRange < nums.size() - 1)
    //     {
    //         for (int i = 0; i < nums.size(); i++)
    //         {
    //             rightRange = max(i + nums[i], rightRange);
    //         }
    //         leftRange = rightRange + 1;
    //         rightRange = farthest;
    //         jump++;
    //     }

    // more inclined towards greedy approach scanning
    vector<int> nums = {2, 3, 1, 1, 4};
    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    for (int i = 0; i < nums.size() - 1; i++)
    {

        farthest = max(farthest, i + nums[i]);

        if (i == currentEnd)
        {
            jumps++;
            currentEnd = farthest;
        }
    }
    return 0;
}
