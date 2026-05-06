#include <iostream>
using namespace std;
int main(){
    // gives integer, because checks rhs first, then assigns to float
    float x = 5/2;
    cout<<x<<endl;
    float z= 5.0/2;
    cout<<z<<endl;
    int y = 5.0/2;
    cout<<y<<endl;
    
    cout<<5.00/2<<endl;
    // important question
    int a = 3,b,c;
    b = a = 10;
    c = a < 10;
    cout<<a<<""<<b<<""<<c<<endl;
}