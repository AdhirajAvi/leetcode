#include <iostream>
using namespace std;
int main(){
    int a = 5, b = 2;
    cout<<a/b<<endl;
    // wrong way
    // float c = a/b;
    // cout<<c<<endl;

    // right way
    float c = (float)a / b;
    cout << c << endl;
    int x;
    // cin>>x;
    // not correct way
    // cout<<(float)x<<endl;
    // not working
    // float y = (float)x;
    // cout<<y<<endl;
}