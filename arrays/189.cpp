#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> nums = {1,2,3,4,5,6,7};
    // int k = 3;
    // k%=nums.size();
    // int tempk=k;
    // vector<int> temp;
    // for(int i=nums.size()-k;i<nums.size();i++){
    //     if(tempk==0){
    //         break;
    //     }
    //     temp.push_back(nums[i]);
    //     tempk--;
    // }
    // int j=0;
    // while(j<(nums.size()-k)){
    //     temp.push_back(nums[j]);
    //     j++;
    // }

    // for(int i=0;i<nums.size();i++){
    //     nums[i]=temp[i];
    // }

    // for(int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<endl;
    // }

    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    k%=nums.size();
    int tempk=k;
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }


    return 0;
}
