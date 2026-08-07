#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "paper", t = "title";
    map<char,char> mp;
    map<char,char> mp2;
    bool chekk=true;
    for(int i=0,j=0;i<s.size();i++,j++){
        if(mp.find(s[i])!=mp.end()){
            if(mp[s[i]]!=t[j]){
                chekk=false;
                break;
            } 
        }
        else{
            mp.insert({s[i],t[j]});
            }
        if(mp2.find(t[j])!=mp2.end()){
            if(mp2[t[j]]!=s[i]){
                chekk=false;
                break;
            }
        }
        else{
            mp2.insert({t[j],s[i]});
        }
    }
    cout<<chekk<<endl;

    // wrong approach!!!!!!!!
    // for(int i=0,j=0;i<s.size();i++,j++){
        // int scount=count(s.begin(),s.end(),s[i]);
        // int tcount=count(t.begin(),t.end(),t[j]);
        // if(scount==tcount && scount==1){
        //     cout<<true<<endl;
        // }
        // if(i>0 && j>0 && scount==tcount && (s[i]==s[i-1] && t[i]==t[i-1])){
        //     cout<<true<<endl;
        // }
        // if(i<s.size()-1 && j<t.size()-1 && scount==tcount && (s[i]==s[i+1] && t[i]==t[i+1])){
        //     cout<<true<<endl;
        // }

    return 0;
}
    

