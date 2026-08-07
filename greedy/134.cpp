#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    for (int i = 0; i < gas.size(); i++)
    {
        int tank = 0;
        bool flag = 1;

        // for(int j=i;j<2*gas.size();j%gas.size()){
        //     for(int j=i; j<i+gas.size(); j++) {
        //         int idx = j % gas.size();

        //         tank=(gas[idx]-cost[idx])+gas[idx+1];

        //         if(tank<cost[j]){
        //             flag=0;
        //             break;
        //         }
        //         // if(tank>=cost[j]){
        //         //     tank=(gas[j]-cost[j])+gas[j+1];
        //         // }
        //         // else{
        //         //     break;
        //         // }
        //     }
        //     if(flag==1){
        //         cout<<gas[i]<<endl;
        //         return 0;
        //     }
        // }

        // cout<<-1<<endl;

        for (int j = i; j < i + gas.size(); j++)
        {
            int idx = j % gas.size();

            tank += gas[idx] - cost[idx];

            if (tank < 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
