#include<bits/stdc++.h>
using namespace std;

void explainPriorityqueue(){
    // also maxHeap
    priority_queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(6);

    cout<<q.top()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    priority_queue<int> q2;
    q.swap(q2);
    // no clear
    // st.clear();

    // minHeap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    cout<<pq.top();
}

int main(){
    explainPriorityqueue();
}