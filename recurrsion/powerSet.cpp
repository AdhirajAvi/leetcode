#include <bits/stdc++.h>
using namespace std;

void gResultpowerset(int idx, vector<int> t, vector<int> q, vector<vector<int>> &result)
{
    if (idx == q.size())
    {
        result.push_back(t);
        return;
    }

    t.push_back(q[idx]);
    gResultpowerset(idx + 1, t, q, result);
    t.pop_back();
    
    gResultpowerset(idx + 1, t, q, result);
    
}

vector<vector<int>> gPowerset(vector<int> &q)
{
    vector<vector<int>> result;
    int idx = 0;
    vector<int> t;
    gResultpowerset(idx, t, q, result);
    return result;
}

int main()
{

    vector<int> q = {1, 2, 3};
    vector<vector<int>> ans = gPowerset(q);

    for (auto i : ans)
    {
        for(auto j:i){
            cout << j <<' ';
        }
        cout<<endl;
    }

    return 0;
}