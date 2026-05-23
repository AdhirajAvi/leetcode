#include<bits/stdc++.h>
using namespace std;

bool kokoEating(vector<int> &piles, int &h, int &mid){
    int i=0;
    int summed=0;
    while(i<piles.size()){
        summed += ceil((double)piles[i] / mid);
        // summed += ceil((float)piles[i] / mid);
        i++; 
    }
    // if(summed==h){
    //     // if(wtCounter<=capacity){
    //         wtCounter+=weights[i];  
    //     }
    //     else{
    //         daysCounter+=1; 
    //         wtCounter=weights[i];
    //     }
    return summed<=h;
}

int search(vector<int>& piles, int &h) {

    int low= 1;
    int high = *max_element(piles.begin(), piles.end());

    while(low < high){
        int mid = low + (high - low) / 2;
        if(kokoEating(piles, h, mid)){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return high;
}

int main(){
    vector<int> piles = {30,11,23,4,20};
    int h = 5;
    int ans = search(piles, h);
    cout << ans;
    return 0;
}