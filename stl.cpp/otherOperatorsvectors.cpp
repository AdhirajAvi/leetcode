#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.insert(v.begin(),300);
    v.insert(v.begin(),400);
    v.insert(v.begin(),500);
    v.insert(v.begin(),600);
    v.insert(v.begin()+2,4,300);
    v.insert(v.begin(),700);
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> v2;
    v2.insert(v2.begin(),50);
    v2.insert(v2.begin(),50);

    cout<<v.size()<<endl;
    v.pop_back();
    v.swap(v2);
    v.clear();
    cout<<v.empty()<<endl;
}

    