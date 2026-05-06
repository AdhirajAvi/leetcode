#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int, int> p={1,3};
    // no
    // int a=1,b=3;
    // pair p2={a,b};
    cout<<p.first<<" "<<p.second<<endl;

    // to store more than 2 numbers in pair, nested pairs
    pair<int,pair<int,int>> p3={1,{3,4}};
    cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl; 

    pair<int,int> arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl;
}
int main(){
    explainPair();
}