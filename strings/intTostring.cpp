#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int a =12345;
    string b=to_string(a);
    cout<<b<<endl;
    b=b+"adhiraj";
    cout<<b<<endl;

    string c="12345678";
    int d=stoi(c);
    cout<<d<<endl;
    d=d+5;
    cout<<d<<endl;
}
