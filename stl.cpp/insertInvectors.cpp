#include<bits/stdc++.h>
using namespace std;

int main(){
    // v=[0,0]; , har baar array ke last me do 0 bchenge hi
    vector<int> v(2,0);

    v.insert(v.begin(),300);
    v.insert(v.begin(),400);
    v.insert(v.begin(),500);
    v.insert(v.begin(),600);
    v.insert(v.begin()+2,4,300);
    v.insert(v.begin(),700);
    for(auto i:v){
        cout<<i<<" ";
    }

    // no use, just for information
    vector<int> v2;
    v2.insert(v2.begin(),50);
    v2.insert(v2.begin(),50);
    v.insert(v.begin(),v2.begin(),v2.end());
}