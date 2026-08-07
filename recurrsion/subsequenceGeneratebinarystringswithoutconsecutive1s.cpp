#include <bits/stdc++.h>
using namespace std;


void gResultbinarystrings(int &n, string s, vector<string> &result){
    if(s.size()==n){
        result.push_back(s);
        return;
    }


    s.push_back('0');
    gResultbinarystrings(n, s, result);
    s.pop_back();
    if(s.empty() || s.back()!='1'){
        s.push_back('1');
        gResultbinarystrings(n, s, result);
        s.pop_back();
    }
    return;


    
}

vector<string> gBinarystrings(int &n){
    vector<string> result;
    string s="";
    gResultbinarystrings(n, s, result);
    return result;
}

int main(){

    int n = 3;
    vector<string> ans=gBinarystrings(n);

    for(auto i: ans){
        cout<<i<<endl;
    }

    return 0;
}