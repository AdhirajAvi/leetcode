#include<iostream>
using namespace std;

int main(){
    string str="adhiraj is good";
    cout<<str<<" "<<str.length()<<endl;
    
    str.append("chayn");

    str=str+"chyn";
    str="chyn"+str;
    
    cout<<str<<" "<<str.length()<<endl;
}