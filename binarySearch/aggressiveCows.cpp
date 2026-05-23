#include<bits/stdc++.h>
using namespace std;

// bool numberOfdays(vector<int> &bloomDay, int &m, int &k, int &mid){
//     int i=0;
//     int flowerCounter=0;
//     int bouquetsCounter=0;
//     while(i<bloomDay.size()){
//         if(bloomDay[i]<=mid){
//             flowerCounter+=1;
//             if(flowerCounter>=k){
//                 bouquetsCounter+=1;
//                 flowerCounter=0;
//             }
//         }
//         else{
//             flowerCounter=0;
//         }    
        
//         i++; 
//     }
//     return bouquetsCounter>=m;
// }

// int search(vector<int>& nums, int &n, int &k) {

//     int low= *min_element(nums.begin(),nums.end());
//     int high = *max_element(nums.begin(), bloomDay.end());

//     if(m*k>bloomDay.size()){
//         return -1;
//     } 

//     while(low < high){
//         int mid = low + (high - low) / 2;
//         if(numberOfdays(bloomDay, m, k, mid)){
//             high=mid;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return low;
// }

// int main(){
//     vector<int> nums = {0, 3, 4, 7, 10, 9};
//     int n = 6, k = 4;
//     sort(nums.begin(),nums.end());
//     int maxi=0;

//     int low= 1;
//     int high = *max_element(nums.begin(), nums.end());
//     while(low<high){
//         int counter=0;
//     // while(j<k){
//         int i=1;
//         while(i<n){
//             int p=nums[i]-nums[i-1];
//             if(p>=low){
//             counter+=1;
//             }    
//             if(counter>=k){
//             cout<<low;
//     }       
//             i++;
//         }
//         low++;
//         // i++;
//     }
//     return 0;
// }

bool canPlace(vector<int>& nums, int n, int k, int mid){

    int counter = 1;

    int last = nums[0];

    int i = 1;

    while(i < n){

        if(nums[i] - last >= mid){

            counter++;

            last = nums[i];
        }

        i++;
    }

    return counter >= k;
}

int main(){

    vector<int> nums = {0,3,4,7,10,9};

    int n = 6;

    int k = 4;

    sort(nums.begin(), nums.end());

    int low = 1;

    int high = nums[n-1] - nums[0];

    while(low < high){

        int mid = low + (high-low+1)/2;

        if(canPlace(nums,n,k,mid)){

            low = mid;
        }
        else{

            high = mid-1;
        }
    }

    cout << low;

    return 0;
}