#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);

    // loop iterators==loop
    for(auto it1=v.begin(); it1!=v.end(); it1++){
        cout<<*it1<<endl;
    }

    for(auto i:v){
        cout<<i<<endl;
    }
}

int main(){
    explainVector();
}
