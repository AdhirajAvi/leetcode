#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>> intervals = {{1,100}, {11,22}, {1,11}, {2,12}};
    
    // sort(intervals.begin(), intervals.end());
    sort(intervals.begin(), intervals.end(),
     [](const pair<int,int>& a, const pair<int,int>& b) {
         return a.second < b.second;
     });
 
 
    
    int counter=0;
    
    int start1 = intervals[0].first;
    int end1   = intervals[0].second;

    for (int i = 1; i < intervals.size(); i++)
    {
        int start2 = intervals[i].first;
        int end2= intervals[i].second;
       
       if(end1<=start2){
        start1=start2;
        end1=end2;
       }
       else{
        counter++;
       }
    }

   cout<<(counter)<<endl;

    return 0;
}

// method 2 like nMeetings!!!!!!!!
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<pair<int,int>> intervals = {{1,100}, {11,22}, {1,11}, {2,12}};

//     sort(intervals.begin(), intervals.end(),
//          [](const pair<int,int>& a, const pair<int,int>& b)
//          {
//              return a.second < b.second;
//          });

//     int counter = 1;   // number of intervals kept

//     int start1 = intervals[0].first;
//     int end1   = intervals[0].second;

//     for (int i = 1; i < intervals.size(); i++)
//     {
//         int start2 = intervals[i].first;
//         int end2   = intervals[i].second;

//         if (end1 <= start2)   // non-overlapping
//         {
//             counter++;        // keep this interval
//             start1 = start2;
//             end1 = end2;
//         }
//     }

//     cout << intervals.size() - counter << endl;   // removals

//     return 0;
// }