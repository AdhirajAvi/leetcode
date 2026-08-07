#include<bits/stdc++.h>
using namespace std;

class Stack{

    queue<int> q1;

    public:
    void push(int x){
        int len=q1.size();
        q1.push(x);

        for(int i=0; i<len;i++){
            q1.push(q1.front());
            q1.pop();
        }
    }

    int pop() {
        if(empty()){
            return NULL;    
        }
        int whatDeleted=q1.front();
        q1.pop();  
        return whatDeleted;
    }

    int top() {
      return q1.front();  
    }

    bool empty() {
        if(q1.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.pop() << endl; // 30
    cout << st.pop() << endl; // 20
    cout << st.pop() << endl; // 10
    
    return 0;
}

