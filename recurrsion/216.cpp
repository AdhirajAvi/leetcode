#include <bits/stdc++.h>
using namespace std;

void gResultSubsetSum(int idx, int sum, int counter, int &n, int &k,
                      vector<int> &curr,
                      vector<vector<int>> &ans)
{
    if(sum==n && counter==k){
    ans.push_back(curr);
    return;
    }

    // if(counter==k){
    //     return;
    // }
    if(sum > n || counter==k){
        return;
    }
    // counter++;
    for (int i = idx; i < 10; i++)
    {
        // noneed!!!!!!!!
        // if (i > idx && i == i - 1)
        //     continue;

        // Take
        curr.push_back(i);

        // Explore
        gResultSubsetSum(i + 1, sum+i, counter+1, n, k, curr, ans);

        // Backtrack
        curr.pop_back();
    }
}

vector<vector<int>> subsetSum(int n, int k)
{
    vector<vector<int>> ans;
    vector<int> curr;
    int sum=0;
    int counter=0;

    gResultSubsetSum(1, sum, counter, n, k, curr, ans);

    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
    int n=7;
    int k=3;

    vector<vector<int>> ans = subsetSum(n, k);

    for (auto i : ans){
        for(auto j:i){
            cout<<j<<' ';
        }
        cout<<endl;
    }
       
}