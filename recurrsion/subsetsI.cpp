#include <bits/stdc++.h>
using namespace std;

void gResultSubsetSum(int idx,
                      int sum,
                      vector<int> &nums,
                      vector<int> &curr,
                      vector<int> &ans)
{
    // Current subset's sum
    ans.push_back(sum);

    for (int i = idx; i < nums.size(); i++)
    {
        // Take
        curr.push_back(nums[i]);

        // Explore
        gResultSubsetSum(i + 1, sum + nums[i], nums, curr, ans);

        // Backtrack
        curr.pop_back();
    }
}

vector<int> subsetSum(vector<int> &nums)
{
    vector<int> ans;
    vector<int> curr;

    gResultSubsetSum(0, 0, nums, curr, ans);

    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<int> ans = subsetSum(nums);

    for (int x : ans)
        cout << x << " ";
}


// here push pop not req as vector storage not req only their sum
// #include <bits/stdc++.h>
// using namespace std;

// void gResultSubsetSum(int idx,
//                       int sum,
//                       vector<int> &nums,
//                       vector<int> &ans)
// {
//     // Every state represents one subset
//     ans.push_back(sum);

//     for (int i = idx; i < nums.size(); i++)
//     {
//         gResultSubsetSum(i + 1, sum + nums[i], nums, ans);
//     }
// }

// vector<int> subsetSum(vector<int> &nums)
// {
//     vector<int> ans;

//     gResultSubsetSum(0, 0, nums, ans);

//     sort(ans.begin(), ans.end());

//     return ans;
// }

// int main()
// {
//     vector<int> nums = {1, 2, 3};

//     vector<int> ans = subsetSum(nums);

//     for (int x : ans)
//         cout << x << " ";
// }