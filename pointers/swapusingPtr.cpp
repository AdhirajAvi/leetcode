#include <iostream>
using namespace std;

void swappassbyreference(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    swappassbyreference(&a,&b);
    cout<<a<<endl<<b;
}
// int main aur func ke a, b dona alg he, scope, yk
