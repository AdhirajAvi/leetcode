#include<iostream>
using namespace std;

void printnum(int a){
    // base case
    if(a==0){
        return;
    }
    cout<<a<<endl;
    // work
    printnum(a-1);
    // call
}

int main(){
    int x;
    cin>>x;
    printnum(x);
}