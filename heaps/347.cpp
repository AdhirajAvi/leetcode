#include <bits/stdc++.h>
using namespace std;

// bool comperator(pair<int, int> x, pair<int, int> y)
// {
//     if (x.second < y.second)
//     {
//         return true;
//     }
//     else if (x.second == y.second)
//     {
//         return x.first < y.first;
//     }
//     else
//     {
//         return false;
//     }
// }

// int main()
// {
//     vector<int> nums = {1, 1, 1, 2, 2, 3};
//     int k = 2;

//     vector<pair<int, int>> temp;
//     unordered_map<int, int> mpp;
//     //    priority_queue<pair<int,int>> pq;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         int counter = count(nums.begin(), nums.end(), nums[i]);
//         mpp[nums[i]] = counter;
//     }

//     //    int j=0;
//     //    while(j<mpp.size()){
//     //     temp.push_back(mpp[j].first(),mpp[j].second());
//     //     j++;
//     //    }

//     for (auto it : mpp)
//     {
//         temp.push_back({it.first, it.second});
//     }

//     sort(temp.begin(), temp.end(), comperator);

//     for (int i = temp.size() - 1; i > (temp.size() - 1) - k; i--)
//     {
//         cout << temp[i].first << endl;
//     }
// }


int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    // vector<pair<int, int>> temp;
    unordered_map<int, int> mpp;
    priority_queue<pair<int, int>> pq;

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     int counter = count(nums.begin(), nums.end(), nums[i]);
    //     mpp[nums[i]] = counter;
    // }

    //     for (int i = 0; i < nums.size(); i++)
    // {
    //     mpp[nums[i]]++;
    // }

    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]] = mpp[nums[i]] + 1;
    }

    for (auto it : mpp)
    {
        pq.push({it.second, it.first});
    }

    // as leetcode wants vector as return!!!!!!!!
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }

    for (int x : ans)
    {
        cout << x << " ";
    }
}
