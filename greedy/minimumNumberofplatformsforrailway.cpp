#include <bits/stdc++.h>
using namespace std;


// int main()
// {
//     vector<int> Arrival = {900, 940, 950, 1100, 1500, 1800};
//     vector<int> Departure = {910, 1200, 1120, 1130, 1900, 2000};

//     vector<pair<int,int>> ans;
//     for(int i=0;i<Departure.size();i++){
//         // ans[i].first=Arrival[i];
//         // ans[i].second=Departure[i];
//         ans.push_back({Arrival[i],Departure[i]});
//     }

//     // sort(intervals.begin(), intervals.end());
//     sort(ans.begin(), ans.end(),
//      [](const pair<int,int>& a, const pair<int,int>& b) {
//          return a.second < b.second;
//      });

//     int counter=1;

//     int start1 = ans[0].first;
//     int end1   = ans[0].second;

//     for (int i = 1; i < ans.size(); i++)
//     {
//         int start2 = ans[i].first;
//         int end2= ans[i].second;

//        if(end1<=start2){
//          counter++;
//           start1=start2;
//         end1=end2;
//        }
//        else{

//         start1=start2;
//         end1=end2;
//        }
//     }

//    cout<<(counter)<<endl;

//     return 0;
// }


int main()
{
    vector<int> Arrival = {900, 940, 950, 1100, 1500, 1800};
    vector<int> Departure = {910, 1200, 1120, 1130, 1900, 2000};

    sort(Arrival.begin(), Arrival.end());
    sort(Departure.begin(), Departure.end());

    int i = 0;
    int j = 0;

    int counter = 0;
    int maxi = 0;

    while (i < Departure.size())
    {
        if (Arrival[i] < Departure[j])
        {
            counter++;
            i++;
        }
        else
        {
            counter--;
            j++;
        }
        maxi = max(maxi, counter);
    }

    cout << maxi << endl;

    return 0;
}