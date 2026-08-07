#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>> intervals = {{1,3},{6,9}};
    // vector<pair<int,int>> newInterval = {2,5};
    pair<int,int> newInterval = {2,5};
    intervals.push_back(newInterval);
    sort(intervals.begin(), intervals.end());
    vector<pair<int,int>> ans;
    
    int start1 = intervals[0].first;
    int end1   = intervals[0].second;

    for (int i = 1; i < intervals.size(); i++)
    {
    //    int start2=intervals[i][0];
    //    int end2=intervals[i][1];
        int start2 = intervals[i].first;
        int end2= intervals[i].second;
       
       if(end1>=start2){
        start1=start1;
        end1=max(end1, end2);
       }
       else{
        ans.push_back({start1, end1});
        start1 = start2;
        end1 = end2;
       }
    }
    ans.push_back({start1, end1});

    for(auto p : ans)
    {
        cout << "[" << p.first << "," << p.second << "] ";
    }

    return 0;
}