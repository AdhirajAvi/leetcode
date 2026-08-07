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
    string expression = "(a+b)*c";
    stack<char> st;

    int i=0;
    while(i<expression.size()){
        st.push(expression[i]);
        i++;
    }

    string ans1="";
    while(!st.empty()){
        if(st.top()==')'){
            ans1+='(';
            st.pop();
        }
        else if(st.top()=='('){
            ans1+=')';
            st.pop();
        }
        else{
            ans1+=st.top();
            st.pop();
        }
    }

    string ans2="";

    for(int i=0;i<ans1.size();i++){

        if((ans1[i]<='z' && ans1[i]>='a') || (ans1[i]<='Z' 
            && ans1[i]>='A') || (ans1[i]<='9' 
            && ans1[i]>='0')){
                ans2+=ans1[i];
            }
        
        else if(ans1[i]=='('){
            st.push(ans1[i]);
        }
        else if(ans1[i]==')'){
            while(st.top()!='('){
                char out=st.top();
                st.pop();
                ans2+=out;
            }
            st.pop();
        }

        else{
            while(!st.empty() && priorityCheck(st.top())>priorityCheck(ans1[i])){
            ans2+=st.top();
            st.pop();
        }
        st.push(ans1[i]);
    }
}

    while(!st.empty()){
        ans2+=st.top();
        st.pop();
    }

    // ans.reverse();
    reverse(ans2.begin(), ans2.end());
    cout<<ans2<<endl;
   
    return 0;
}

