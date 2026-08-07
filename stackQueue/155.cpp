#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<pair<int,int>> st;

    MinStack() {}

    void push(int val) {
        if(st.empty()) {
            st.push({val, val});
        }
        else {
            st.push({val, min(val, st.top().second)});
        }
    }

    void pop() {
        st.pop();
    }

    int top() {
        return st.top().first;
    }

    int getMin() {
        return st.top().second;
    }
};

int main() {

    return 0;

}


// class MinStack {
// public:

// stack<pair<int, int>> st;

//     MinStack() {
        
//     }
    
//     void push(int val) {
//         if(!st.empty()){
//             st.push()
//         }
//     }
    
//     void pop() {
        
//     }
    
//     int top() {
        
//     }
    
//     int getMin() {
        
//     }
// };


