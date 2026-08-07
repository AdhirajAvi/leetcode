#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> asteroids = {5,10,-5};
    stack<int> st;
    for(int i=0;i<asteroids.size();i++){
        // if(!st.empty() && abs(st.top())>abs(asteroids[i]) 
        // && (st.top()>0 && asteroids[i]<0)){
        //     continue;
        // }
        while(!st.empty() && abs(st.top())<abs(asteroids[i]) 
        && (st.top()>0 && asteroids[i]<0)){
            st.pop();
        }
        if(!st.empty() && (st.top()>0 && asteroids[i]<0) && abs(st.top())==abs(asteroids[i])){
            st.pop();
            continue;
        }

        // big no!!!!!!!!
        while(!st.empty() && (st.top()>0 && asteroids[i]<0) && abs(st.top())==abs(asteroids[i])){
            st.pop();
            // continue;
        }

        if(!st.empty() && abs(st.top())>abs(asteroids[i]) 
        && (st.top()>0 && asteroids[i]<0)){
            continue;
        }
        // while(!st.empty() && abs(st.top())>abs(asteroids[i]) 
        // && (st.top()>0 && asteroids[i]<0)){
        //     asteroids.pop_back();
        // }
        st.push(asteroids[i]); 
    }

    int resul=0;
    while(!st.empty()){
        resul=st.top();
        st.pop();
        cout<<resul<<endl;
    }
    // int i=0;
    // while(i<asteroids.size()){
    //     cout<<asteroids[i]<<endl;
    // }

    return 0;
}

