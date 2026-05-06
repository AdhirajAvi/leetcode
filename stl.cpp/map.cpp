#include<bits/stdc++.h>
using namespace std;

void explainMap(){
    // dictionary in python
    // sorted and unique
    map<int,int> mp;
    map<int,pair<int,int>> mp1;
    map<pair<int,int>,int> mp2;
    
    mp[1]=2;
    mp.insert({3,1});
    mp.emplace(2,4);
    mp1.insert({2,{3,1}});
    mp2.insert({{2,3},1});

    mp[2]=7;
    mp1[2]={5,1};
    mp2[{2,3}]=10;

    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<mp[1]<<endl;
    cout<<mp[2]<<endl; 

    // check as striver wrong
    // auto it=mp.find(3);
    // cout<<*it.second<<endl;
    // find isme bhi end de skta he

    auto it= mp.lower_bound(2);
    auto it1=mp.upper_bound(3);

    // rest functions same as vector 
    // begin, end, clear, insert, size, swap
}

int main(){
    explainMap();
}