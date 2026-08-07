#include <bits/stdc++.h>
using namespace std;

int main()
{
    // brute!!!!!!!!
    // vector<vector<int>> points = {{1,3}, {-2,2}, {5,8}};
    // int k = 2;
    // sort(points.begin(), points.end(),
    //      [](vector<int>& a, vector<int>& b)
    //      {
    //          int d1 = a[0] * a[0] + a[1] * a[1];
    //          int d2 = b[0] * b[0] + b[1] * b[1];
    //          return d1 < d2;
    //      });
    // vector<vector<int>> ans(points.begin(), points.begin() + k);

    // for (auto point : ans)
    // {
    //     cout << point[0] << " " << point[1] << endl;
    // }

    // return 0;


    // optimal!!!!!!!!
    vector<vector<int>> points = {{1,3}, {-2,2}, {5,8}, {0,1}};
    int k = 2;
    // Max Heap: {distance, point} or do by index!!!!!!!!
    priority_queue<pair<int, vector<int>>> pq;
    for (int i = 0; i < points.size(); i++)
    {
        int x = points[i][0];
        int y = points[i][1];
        int dist = x * x + y * y;
        pq.push({dist, points[i]});
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    vector<vector<int>> ans;
    while (!pq.empty())
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }

    for (auto point : ans)
    {
        cout << point[0] << " " << point[1] << endl;
    }

    return 0;
}
