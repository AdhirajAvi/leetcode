#include<iostream>
using namespace std;

int maxofTwo(int a,int b){
    if(a>b)return a;
    else return b;
}

int main(){
    cout<<maxofTwo(3,6);
}