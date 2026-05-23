#include<bits/stdc++.h>
using namespace std;

int resul(vector<int>& nums,int k){
    int sum=0;
    int counter=0;
    int i=0;
    for(int j=0;j<nums.size();j++){
        if(nums[j]%2!=0){
            counter+=1;
        }
        while(counter>k){
            if(nums[i]%2!=0){
                counter-=1;
            }
            i++;
        }
        sum+=j-i+1;
    }
    return sum;
}

int main(){
    vector<int> nums = {1,1,2,1,1};
    int k = 3;
    // return resul(nums,k)-resul(nums,k-1);
    cout << resul(nums,k)-resul(nums,k-1);
    
    return 0;
    }

    
