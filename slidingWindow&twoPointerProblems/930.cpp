#include<bits/stdc++.h>
using namespace std;

int atMost(vector<int>& nums, int goal){
    if(goal < 0) return 0;
    int sum=0;
    int j=0;
    int counter=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        counter+=1;
        while(sum>goal){
            sum-=nums[j];
            j++;
        }
        counter=i-j+1;
    } return counter;}

int main(){
    vector<int> nums = {1,0,1,0,1};
    int goal = 2;
    // int resugen(){
    //     atmost(goal)-atmost(goal-1);
    // }
    int ans = atMost(nums, goal) - atMost(nums, goal-1);
    cout << ans;
    return 0;
    }
// mene klti se i ka kamm j ko de diya

    
