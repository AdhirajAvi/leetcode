// #include <bits/stdc++.h>
// using namespace std;

// void gResultpowerset(int idx, int sum, vector<int> t, vector<int> q, int k, vector<vector<int>> &result)
// {
//     if (sum == k)
//     {
//         result.push_back(t);
//         return;
//     }

//     t.push_back(q[idx]);
//     gResultpowerset(idx + 1, sum, t, q, k, result);
//     t.pop_back();
//     sum=sum-q[idx];
//     idx - 1;

//     if(!t.size() || t.back()==idx)
//     t.push_back(q[idx]);
//     gResultpowerset(idx + 1, sum, t, q, k, result);
//     t.pop_back();
//     idx - 1;

// }

// vector<vector<int>> gPowerset(vector<int> &q, int k)
// {
//     vector<vector<int>> result;
//     int idx = 0;
//     vector<int> t;
//     int sum=0;
//     gResultpowerset(idx, sum, t, q, k, result);
//     return result;
// }

// int main()
// {

//     vector<int> q = {1, 2, 3};
//     int k=7;
//     vector<vector<int>> ans = gPowerset(q, k);

//     for (auto i : ans)
//     {
//         for(auto j:i){
//             cout << j <<' ';
//         }
//         cout<<endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void gResultCombinationSum(int idx,
                           int sum,
                           vector<int> &t,
                           vector<int> &q,
                           int k,
                           vector<vector<int>> &result)
{
    // Found a valid combination
    if (sum == k)
    {
        result.push_back(t);
        return;
    }

    // Out of bounds or sum exceeded
    if (idx == q.size() || sum > k)
        return;

    // Take (can reuse same element)
    t.push_back(q[idx]);
    gResultCombinationSum(idx, sum + q[idx], t, q, k, result);
    t.pop_back();

    // Not Take
    gResultCombinationSum(idx + 1, sum, t, q, k, result);
}

vector<vector<int>> combinationSum(vector<int> &q, int k)
{
    vector<vector<int>> result;
    vector<int> t;

    gResultCombinationSum(0, 0, t, q, k, result);

    return result;
}

int main()
{
    vector<int> q = {2, 3, 6, 7};
    int k = 7;

    vector<vector<int>> ans = combinationSum(q, k);

    for (auto &v : ans)
    {
        for (int x : v)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}