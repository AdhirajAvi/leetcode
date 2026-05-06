#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);

    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    // paricular element
    // v.erase(v.begin()+1);
    // bich ke lgataar elements
    v.erase(v.begin()+1,v.begin()+3);

    for(auto i:v){
        cout<<i<<" ";
    }
}

int main(){
    explainVector();
}
