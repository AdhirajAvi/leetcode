#include<bits/stdc++.h>
using namespace std;

int search(int& M, int& N) {

    int low= 1;
    int high = M;

    while(low <= high){
        int mid = low + (high - low) / 2;
        int k=(pow(mid,N));
        if(k==M){
            return mid;
        }
        else if((pow(mid,N))<M){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int N = 4, M = 69;
    int ans = search(M,N);
    cout << ans;
    return 0;
}


