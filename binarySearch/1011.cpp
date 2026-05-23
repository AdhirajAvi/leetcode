#include<bits/stdc++.h>
using namespace std;

bool capacityToship(vector<int> &weights, int &days, int &mid){
    int i=0;
    int daysCounter=1;
    int wtCounter=0;
    while(i<weights.size()){
        if(wtCounter+weights[i]<=mid){
        // if(wtCounter<=capacity){
            wtCounter+=weights[i];  
        }
        else{
            daysCounter+=1; 
            wtCounter=weights[i];
        }
        i++; 
    }
    return daysCounter<=days;
}

int search(vector<int>& weights, int &days) {

    int low= *max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);

    while(low < high){
        int mid = low + (high - low) / 2;
        if(capacityToship(weights, days, mid)){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}

int main(){
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    int ans = search(weights, days);
    cout << ans;
    return 0;
}