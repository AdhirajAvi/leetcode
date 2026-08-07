#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> Start = {1, 3, 0, 5, 8, 5};
    vector<int> End = {2, 4, 6, 7, 9, 9};

    vector<pair<int, int>> ans;
    for (int i = 0; i < End.size(); i++)
    {
        ans.push_back({Start[i], End[i]});
    }

    sort(ans.begin(), ans.end(),
         [](const pair<int, int> &a, const pair<int, int> &b)
         {
             return a.second < b.second;
         });

    int counter = 0;

    int start1 = ans[0].first;
    int end1 = ans[0].second;

    for (int i = 1; i < ans.size(); i++)

    {
        int start2 = ans[i].first;
        int end2 = ans[i].second;

        if (start2 > end1)
        {
            start1 = start2;
            end1 = end2;
        }
        else
        {

            counter++;
        }
    }

    cout << (ans.size() - counter) << endl;

    return 0;
}


// 2nd approach-both equal!!!!!!!!
// int counter = 1;      // first meeting selected
// int end1 = ans[0].second;

// for(int i = 1; i < ans.size(); i++)
// {
//     int start2 = ans[i].first;
//     int end2   = ans[i].second;

//     if(start2 >= end1)
//     {
//         counter++;
//         end1 = end2;      // update when selected
//     }
// }

// cout << counter<<endl;