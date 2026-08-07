#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    int n = gas.size();

    for (int start = 0; start < n; start++)
    {
        int tank = 0;
        bool possible = true;

        for (int j = start; j < start + n; j++)
        {
            int idx = j % n;

            tank += gas[idx] - cost[idx];

            if (tank < 0)
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << start;
            return 0;
        }
    }

    cout << -1;

    return 0;
}