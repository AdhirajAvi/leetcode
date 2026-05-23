#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "(()())(())";
    stack<char> st;
    string sum="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            if(!st.empty()){
               sum+=s[i]; 
            }
            st.push({s[i]});
        }
        if(s[i]==')'){
            // counter=st.size();
            st.pop();
            if(!st.empty()){
               sum+=s[i]; 
            }
        } 
    }
    cout<<sum<<endl;
    return 0;
    }

    
