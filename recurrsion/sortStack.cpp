// #include <bits/stdc++.h>
// using namespace std;


// void insert(stack<int> &st, int &ans){
//     if(!st.empty() && ans<st.top()){
//         int out=st.top();
//         st.pop();

//         st.push(ans);
//         ans=out;
//     }

//     // return;
//     sortStack(st);
//     // insert(st, ans);

//     st.push(ans);
// }

// void sortStack(stack<int> &st){
//     // vector<int> temp;
//     // while(st.empty()){
//     //     int ans=st.top();
//     //     st.pop();

//     //     temp.push_back(ans);
//     // }
//     if(st.empty()){
//         return;
//     }
//     int ans=st.top();
//     st.pop();

//     insert(st, ans);

//     // if(!st.empty() && ans>st.top()){
//     //     ans
//     // }
//     // sortStack()
// }

// int main()
// {
//     // stack<int> stack;

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int &ans) {
    // Base case
    if (st.empty() || st.top() <= ans) {
        st.push(ans);
        return;
    }

    int out = st.top();
    st.pop();

    insert(st, ans);

    st.push(out);
}

void sortStack(stack<int> &st) {
    // Base case
    if (st.empty()) {
        return;
    }

    int ans = st.top();
    st.pop();

    // Sort the remaining stack
    sortStack(st);

    // Insert current element in sorted position
    insert(st, ans);
}

int main() {
    stack<int> st;

    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);
    st.push(5);

    sortStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}