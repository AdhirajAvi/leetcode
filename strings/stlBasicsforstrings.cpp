#include<iostream>
using namespace std;

int main(){
    // !!!!!!!!important!!!!!!!!
    // 👉 push_back() → ONLY 1 char
    // 👉 append() → string, substring, or multiple chars
    string str="adhiraj is good";
    cout<<str<<" "<<str.length()<<endl;
    str.push_back('c');
    str.append("chayn");
    str.pop_back();
    str.clear();
    cout<<str<<" "<<str.length()<<endl;
}