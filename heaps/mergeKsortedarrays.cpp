#include <bits/stdc++.h>
using namespace std;

int main()
{
    // brute!!!!!!!!
    // vector<pair<int,int,int>> lists = {{1,4,5},{1,3,4},{2,6}};
    vector<vector<int>> lists = {
        {1, 4, 5},
        {1, 3, 4},
        {2, 6}};
    vector<int> temp;

    for (int i = 0; i < lists.size(); i++)
    {
        for (int j = 0; j < lists[i].size(); j++)
        {
            temp.push_back(lists[i][j]);
        }
    }

    sort(temp.begin(), temp.end());
}