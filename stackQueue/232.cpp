#include<bits/stdc++.h>
using namespace std;

class Queue{

    stack<int> s1;
    stack<int> s2;

    public:
    void push(int x){
        s1.push(x);
    }

    int pop() {
        if(empty()){
            return -1;    
        }

        if(s2.empty()){

            while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        }
        int whatDeleted=s2.top();
        s2.pop();
        return whatDeleted;
    }

    int peek() {
      if(empty()){
            return -1;    
        }

        if(s2.empty()){
            
            while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        }

        int whatFront=s2.top();
        return whatFront;  
    }

    bool empty() {
        if(s1.empty() && s2.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    Queue qu;

    qu.push(10);
    qu.push(20);
    qu.push(30);

    cout << qu.pop() << endl; // 30
    cout << qu.pop() << endl; // 20
    cout << qu.pop() << endl; // 10
    
    return 0;
}

