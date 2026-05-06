#include <iostream>
using namespace std;
int main(){
    // int a =5 float b = 3.14;--> incorrect
    // int a =5 int b = 3.14;--> incorrect
    // int a = 5, b = 6;---> correct
    int a = 5;
    // same, no difference in uses
    a++;
    ++a;
    float b = 3.14;
    cout<<a+b<<endl;

    // diferent, yes difference in uses because inside with cout
    int x=5;
    // post increment
    cout<<x<<endl;
    cout<<x++<<endl;
    cout<<x<<endl;
    // pre increment
    cout<<x<<endl;
    cout<<++x<<endl;
    cout<<x<<endl;
    
    // input 
    int y;
    // cin>>y>>endl;--incorrect, endl is used for output not input
    // cin>>y<<endl;--incorrect, endl is used for output not input
    cin>>y;
    cout<<y*y<<endl;

    // %-remainder printing
}