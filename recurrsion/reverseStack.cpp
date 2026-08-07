#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st, int &ans) {
    // Base case
    if (st.empty()) {
        st.push(ans);
        return;
    }

    int out = st.top();
    st.pop();

    insertAtBottom(st, ans);

    st.push(out);
}

void reverseStack(stack<int> &st) {
    // Base case
    if (st.empty()) {
        return;
    }

    int ans = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, ans);
}

int main() {
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverseStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}