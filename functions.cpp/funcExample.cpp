#include <iostream>
using namespace std;

void sum(int a,int b){
    cout<<a+b<<endl;
}
int anothersum(int a,int b){
    // will work but func is broken
    // cout<<a+b<<endl;
    return a+b;
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    // right, can only call as void func
    sum(a,b);
    // wrong, in void, cant return result(like here), only call but in rest types can do both
    // int result=sum(a,b);

    // correct ways
    int result=anothersum(a,b);
    cout<<anothersum(a,b);
    // bad ways
    anothersum(a,b);
}

