#include<iostream>
using namespace std;

int fib(int a){
    // !!!!!!!!important!!!!!!!!
    // normal quest me pattern analyze kro, like konse term me jese 8th term me 21 kese aya ya without term analyze kro
    
    // if(a==1){
    //     return a;
    // here wrong}
    if(a==1 || a==2){
        return 1;
    }
    return a=fib(a-1)+fib(a-2);
}

int main(){
    int x;
    cin>>x;
    cout<<fib(x);
}