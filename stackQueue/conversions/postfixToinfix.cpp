#include <bits/stdc++.h>
using namespace std;

int main() {
    string expression = "ab+";
    stack<string> st;

    for(int i=0;i<expression.size();i++){

        if((expression[i]<='z' && expression[i]>='a') || (expression[i]<='Z' 
            && expression[i]>='A') || (expression[i]<='9' 
            && expression[i]>='0')){
                // st.push(string(expression[i]));
                st.push(string(1,expression[i]));
            }

        else{ 
            string t1=st.top();
            st.pop();
            string t2=st.top();
            st.pop();
            string resul="("+t2+expression[i]+t1+")";
            st.push(resul);
        }
    }

    // string ans="";
    // while(!st.empty()){
    //     ans+=st.top();
    //     st.pop();
    // }
    // cout<<ans<<endl;
    cout<<st.top()<<endl;
   
    return 0;
}

