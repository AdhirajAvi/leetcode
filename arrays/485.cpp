#include <bits/stdc++.h>
using namespace std;

int main()
{
    // approach-2!!!!!!!!
    vector<int> arr = {1, 1, 0, 1, 1, 1};
    int sum = 0;
    int temp = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        temp = 0;
        if (arr[i] == 1)
        {
            while (i < arr.size() && arr[i] != 0)
            {
                temp += 1;
                if (temp > sum)
                {
                    sum = temp;
                }
                i++;
            }

            // approach-1!!!!!!!!
            //     temp+=1;
            // }
            //     else if(arr[i]==1 && (arr[(i+1)]==0)){
            //         temp+=1;
            //         if(temp>sum){
            //             sum=temp;
            //             temp=0;
            //         }
            //     }
            //     else if(arr[i]==1 && (i==arr.size()-1 || arr[(i+1)]==0)){
            //         temp+=1;
            // if(temp>sum){
            //     sum=temp;
            //     temp=0;
            // }
            //     }
        }
    }
    cout << sum << endl;

    return 0;
}
