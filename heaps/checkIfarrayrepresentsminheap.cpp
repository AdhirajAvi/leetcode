#include <bits/stdc++.h>
using namespace std;

int main()
{
    // jb purane jamane me pade the whi he!!!!!!!!
    vector<int> nums = {10, 20, 30, 21, 23};
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && nums[left] < nums[i])
        {
            cout << false;
            return 0;
        }

        if (right < n && nums[right] < nums[i])
        {
            cout << false;
            return 0;
        }
    }

    cout << true;

    // wrong pq me jese hi koi jyega toh auto adjust ho jyega toh condition check krna bekar he,
    // ek naye vector se bhi beka he!!!!!!!!
    // vector<int> pq;
    // vector<int> nums = {10, 20, 30, 21, 23};

    // for(int i=0;i<nums.size();i++){
    //     while(!pq.size() && pq.size()>3){
    //         pq.pop_back();
    //     }
    //     if(!pq.empty() && pq[0]>nums[i]){
    //         cout<<false<<endl;
    //         return 0;
    //     }
    //     pq.push_back(nums[i]);
    // }
    // cout<<true<<endl;
    // return 0;
}
