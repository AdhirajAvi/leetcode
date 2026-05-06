#include<iostream>
#include<climits>
#include<cmath>
// #include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2][2]={{78,61},{13,76}};

    int mx=INT_MIN;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            mx=max(mx,arr[i][j]);
        } 
    }
    cout<<mx<<endl;
}