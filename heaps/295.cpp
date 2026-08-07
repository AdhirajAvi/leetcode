#include <bits/stdc++.h>
using namespace std;

// brute!!!!!!!!
class MedianFinder {
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ans;
public:
    MedianFinder() {
        // priority_queue<int, vector<int>, greater<int>> pq;
    }
    
    void addNum(int num) {
        // pq.push(num);
        ans.push_back(num);
    }
    
    double findMedian() {

        int k=ans.size()/2;

        for(int i=0;i<ans.size();i++){
            pq.push(ans[i]);
        }

        // int out=0;
        //     while(!pq.empty() && pq.size()>k){
        //         out=pq.top();
        //         pq.pop();
        //     }
        
        if(pq.size()%2!=0){
            int out=0;
            while(!pq.empty() && pq.size()>k){
                out=pq.top();
                pq.pop();
            }
            while (!pq.empty()) {
                pq.pop();
            }
            return out;
        }
        else{
            int out=0;
            while(!pq.empty() && pq.size()>k){
                out=pq.top();
                pq.pop();
            }
            int in=pq.top();
            while (!pq.empty()) {
                pq.pop();
            }
            return (out+in)/2.0;
        }
    }
};


// optimal(Like 2stacks-queueImplementation)!!!!!!!!
class MedianFinder {
public:
    priority_queue<int> left;   // Max Heap
    priority_queue<int, vector<int>, greater<int>> right; // Min Heap

    MedianFinder() {
    }

    void addNum(int num) {

        // Step 1
        left.push(num);

        // Step 2
        right.push(left.top());
        left.pop();

        // Step 3
        if (right.size() > left.size()) {
            left.push(right.top());
            right.pop();
        }
    }

    double findMedian() {

        if (left.size() == right.size()) {
            return (left.top() + right.top()) / 2.0;
        }

        return left.top();
    }
};