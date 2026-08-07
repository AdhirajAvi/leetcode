#include <bits/stdc++.h>
using namespace std;

int main() {
    string num = "10200";
    int k = 1;
    stack<char> st;

    for (int i=0; i<num.size();i++){

        // if(st.empty()){
        //     st.push(num[i]);
        // }

        // if(k>0 && int(st.top())>int(num[i])){
        //     st.pop();
        //     st.push(num[i]);
        //     k--;
        // }

        while(!st.empty() && k>0 && int(st.top())>int(num[i])){
            st.pop();
            k--;
        }
        // if(int(st.top())==int(num[i])){
        //     k--;
        // }
        // else{
        st.push(num[i]);
        // while(k!=0){
        //     st.pop();
        //     k--;
        // }
        // }
    } 

    while(k!=0){
            st.pop();
            k--;
        }

    string ans="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    // for(int j=0;j<st.size();j++){
    //     ans+=st.top();
    //     st.pop();
    // }

    reverse(ans.begin(), ans.end());

    // for(int i=0;i<ans.size();i++){
    //     if(ans[i]!='0'){
    //         break;
    //     }
        // ans.erase(i);
        // ans.erase(ans.begin() + i);
    
int i = 0;
while(i < ans.size() && ans[i] == '0'){
    i++;
}

ans = ans.substr(i);
    cout<<ans<<endl;

if (ans.empty()) {
    cout<<"0"<<endl;
}

return 0;
}