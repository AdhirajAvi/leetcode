#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;
    vector<int> v2(5);

    vector<int> v3(5,0);
    vector<int> v4(5,100);

    vector<pair<int,int>> v5;

    v.push_back(1);
    v.emplace_back(2);

    v5.push_back({1,2});
    v5.emplace_back(3,4);

    // copy of vector
    vector<int> v6(v);  
}

int main(){
    explainVector();
}
