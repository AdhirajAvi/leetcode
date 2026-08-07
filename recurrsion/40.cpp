// incorrect!!!!!!!!
// #include <bits/stdc++.h>
// using namespace std;

// void gResultCombinationSum(int idx, int mxx,
//                            int sum,
//                            vector<int> &t,
//                            vector<int> &q,
//                            int k,
//                            vector<vector<int>> &result)
// {
    
//     if (sum == k)
//     {
//         result.push_back(t);
//         return;
//     }

    
//     if (idx == q.size() || sum > k)
//         return;

//         if(mxx<=idx){
//     t.push_back(q[idx]);
//     gResultCombinationSum(idx+1, mxx, sum + q[idx], t, q, k, result);
//     t.pop_back();
//         }

//         mxx=idx;
//     gResultCombinationSum(idx + 1, mxx, sum, t, q, k, result);
// }

// vector<vector<int>> combinationSum(vector<int> &q, int k)
// {
//     vector<vector<int>> result;
//     vector<int> t;

//     gResultCombinationSum(0, 0, 0, t, q, k, result);

//     return result;
// }

// int main()
// {
//     vector<int> q = {10,1,2,7,6,1,5};
//     int k = 8;

//     vector<vector<int>> ans = combinationSum(q, k);

//     for (auto &v : ans)
//     {
//         for (int x : v)
//             cout << x << " ";

//         cout << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;


// // optimal!!!!!!!!
// void gResultCombinationSum2(int idx,
//                             int sum,
//                             vector<int> &t,
//                             vector<int> &q,
//                             int k,
//                             vector<vector<int>> &result)
// {
//     // Found a valid combination
//     if (sum == k)
//     {
//         result.push_back(t);
//         return;
//     }

//     for (int i = idx; i < q.size(); i++)
//     {
//         // Skip duplicates at the same recursion level
//         if (i > idx && q[i] == q[i - 1])
//             continue;

//         // Sum exceeded
//         if (sum + q[i] > k)
//             break;

//         // Take
//         t.push_back(q[i]);

//         // Move to next index (cannot reuse element)
//         gResultCombinationSum2(i + 1, sum + q[i], t, q, k, result);

//         // Backtrack
//         t.pop_back();
//     }
// }


// optimal(more common way)!!!!!!!!
// void solve(int idx,
//            vector<int>& nums,
//            int target,
//            vector<int>& curr,
//            vector<vector<int>>& ans)
// {
//     if (target == 0)
//     {
//         ans.push_back(curr);
//         return;
//     }

//     for (int i = idx; i < nums.size(); i++)
//     {
//         if (i > idx && nums[i] == nums[i - 1])
//             continue;

//         if (nums[i] > target)
//             break;

//         curr.push_back(nums[i]);
//         solve(i + 1, nums, target - nums[i], curr, ans);
//         curr.pop_back();
//     }
// }

// vector<vector<int>> combinationSum2(vector<int> &q, int k)
// {
//     sort(q.begin(), q.end());

//     vector<vector<int>> result;
//     vector<int> t;

//     gResultCombinationSum2(0, 0, t, q, k, result);

//     return result;
// }

// int main()
// {
//     vector<int> q = {10, 1, 2, 7, 6, 1, 5};
//     int k = 8;

//     vector<vector<int>> ans = combinationSum2(q, k);

//     for (auto &v : ans)
//     {
//         for (int x : v)
//             cout << x << " ";
//         cout << endl;
//     }

//     return 0;
// }


// brute!!!!!!!!
#include <bits/stdc++.h>
using namespace std;

void gResultCombinationSum2(int idx,
                            int sum,
                            vector<int> &t,
                            vector<int> &q,
                            int k,
                            set<vector<int>> &result)
{
    // Found a valid combination
    if (sum == k)
    {
        result.insert(t);
        return;
    }

    // Out of bounds or sum exceeded
    if (idx == q.size() || sum > k)
        return;

    // Take (cannot reuse same element)
    t.push_back(q[idx]);
    gResultCombinationSum2(idx + 1, sum + q[idx], t, q, k, result);
    t.pop_back();

    // Not Take
    gResultCombinationSum2(idx + 1, sum, t, q, k, result);
}

vector<vector<int>> combinationSum2(vector<int> &q, int k)
{
    sort(q.begin(), q.end());

    set<vector<int>> result;
    vector<int> t;

    gResultCombinationSum2(0, 0, t, q, k, result);

    return vector<vector<int>>(result.begin(), result.end());
}

int main()
{
    vector<int> q = {10, 1, 2, 7, 6, 1, 5};
    int k = 8;

    vector<vector<int>> ans = combinationSum2(q, k);

    for (auto &v : ans)
    {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}