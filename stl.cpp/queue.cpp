#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(6);

    cout<<q.back()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.back()<<endl;
    queue<int> q2;
    q.swap(q2);
    // no clear
    // st.clear();
}

int main(){
    explainQueue();
}