#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    // good way
    if(a==0){
        cout<<"zero"<<endl;
    }
    else if(a%2==0){
        cout<<"even"<<endl; 
    }
    else{
        cout<<"odd"<<endl;
    }
    // bad ways, but works
    // if(a%2==0)
    //     cout<<"even"<<endl; 
    // else
    //     cout<<"odd"<<endl;

    // if(a%2==0) cout<<"even"<<endl; 
    // else cout<<"odd"<<endl;

    // right now same work
    if(a>99 and a<1000){
        cout<<"three digit number"<<endl;
    }
    if(a>99 && a<1000){
        cout<<"three digit number"<<endl;
    }
}