#include <bits/stdc++.h>
using namespace std;

// making basic mistakes then made good!!!!!!!!
// int main()
// {
//     vector<int> nums = {2,3,1,1,4};
//     bool flag=1;

//     int farthest = 0;

//     for (int i = 0; i < nums.size() - 1; i++)
//     {

//         farthest = max(farthest, i + nums[i]);

//         // if (farthest!=nums.size()-1)
//         // {
//         //     flag=0;
//         // }
//         // else{
//         //     flag=1;
//         // }
//         if (farthest>=nums.size()-1)
//         {
//             flag=1;
//         }
//         else{
//             flag=0;
//         }
//     }
//     if(flag==0){
//         cout<<false<<endl;
//     }
//     else{
//         cout<<true<<endl;
//     }
//     return 0;
// }

// better approach!!!!!!!!
int main()
{
    // powerful input!!!!!!!!
    // nums = {1, 0, 1, 3, 4};
    vector<int> nums = {1, 0, 1, 3, 4};

    int farthest = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > farthest) 
        {
            cout << false << endl;
            return 0;
        }

        farthest = max(farthest, i + nums[i]);
    }

    cout << true << endl;
    return 0;
}