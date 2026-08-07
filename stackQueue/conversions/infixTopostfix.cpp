#include <bits/stdc++.h>
using namespace std;

int priorityCheck(char x){
    if(x=='^'){
        return 3;
    }
    else if(x=='*' || x=='/'){
        return 2;
    }
    else if(x=='+' || x=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

int main() {
    string expression = "a+b*c";
    stack<char> st;
    string ans="";

    for(int i=0;i<expression.size();i++){

        if((expression[i]<='z' && expression[i]>='a') || (expression[i]<='Z' 
            && expression[i]>='A') || (expression[i]<='9' 
            && expression[i]>='0')){
                ans+=expression[i];
            }
        
        else if(expression[i]=='('){
            st.push(expression[i]);
        }
        else if(expression[i]==')'){
            while(st.top()!='('){
                char out=st.top();
                st.pop();
                ans+=out;
            }
            st.pop();
        }

        else{
            while(!st.empty() && priorityCheck(st.top())>=priorityCheck(expression[i])){
                ans+=st.top();
                st.pop();
        }
            st.push(expression[i]);
    }
}

    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }

    cout<<ans<<endl;
   
    return 0;
}

