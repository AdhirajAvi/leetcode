#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "(1+(2*3)+((8)/4))+1";
    stack<char> st;
    int counter=0;
    int maxi=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push({s[i]});
        }
        if(s[i]==')'){
            counter=st.size();
            st.pop();
            // counter=st.size();
        }
        maxi=max(maxi,counter);
    }
    cout<<maxi<<endl;
    return 0;
    }

    
