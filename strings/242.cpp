#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "anagram", t = "nagaram";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    bool k=false;
    if(s.size()!=t.size()){
        return false;
    }
    for(int i=0,j=0;i<s.size(),j<s.size();i++,j++){
        if(s[i]!=t[j]){
            k=true;
            break;
        }
    }
    if(k==false){
        cout<<"is a anagram"<<endl;
    }
    else{
        cout<<"not a anagram"<<endl;
    }
    return 0;
}
    

