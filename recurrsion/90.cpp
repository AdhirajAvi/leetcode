#include <bits/stdc++.h>
using namespace std;

void gResultSubsetSum(int idx,
                      vector<int> &nums,
                      vector<int> &curr,
                      vector<vector<int>> &ans)
{
    ans.push_back(curr);
    for (int i = idx; i < nums.size(); i++)
    {
        // never!!!!!!!!
        // if(i==nums.size()){
        //     ans.push_back(curr);
        // }
        if (i > idx && nums[i] == nums[i - 1])
            continue;
        // Take
        curr.push_back(nums[i]);

        // Explore
        gResultSubsetSum(i + 1, nums, curr, ans);

        // Backtrack
        curr.pop_back();
    }
}

vector<vector<int>> subsetSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> curr;

    gResultSubsetSum(0, nums, curr, ans);

    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans = subsetSum(nums);

    for (auto i : ans){
        for(auto j:i){
            cout<<j<<' ';
        }
        cout<<endl;
    }
       
}