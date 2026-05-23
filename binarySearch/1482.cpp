#include<bits/stdc++.h>
using namespace std;

bool numberOfdays(vector<int> &bloomDay, int &m, int &k, int &mid){
    int i=0;
    int flowerCounter=0;
    int bouquetsCounter=0;
    while(i<bloomDay.size()){
        if(bloomDay[i]<=mid){
            flowerCounter+=1;
            if(flowerCounter>=k){
                bouquetsCounter+=1;
                flowerCounter=0;
            }
        }
        else{
            flowerCounter=0;
        }    
        
        i++; 
    }
    return bouquetsCounter>=m;
}

int search(vector<int>& bloomDay, int &m, int &k) {

    int low= *min_element(bloomDay.begin(),bloomDay.end());
    int high = *max_element(bloomDay.begin(), bloomDay.end());

    if(m*k>bloomDay.size()){
        return -1;
    }

    while(low < high){
        int mid = low + (high - low) / 2;
        if(numberOfdays(bloomDay, m, k, mid)){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}

int main(){
    vector<int> bloomDay = {1,10,3,10,2};
    int m = 3, k = 1;
    int ans = search(bloomDay, m, k);
    cout << ans;
    return 0;
}