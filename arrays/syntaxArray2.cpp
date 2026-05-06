#include<iostream>
using namespace std;
int main(){
    // declaration
    int array[5];
    // initialization through input
    for(int i=0;i<=4;i++){
        cin>>array[i];
    }
    for(int i=0;i<=4;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    // update
    array[0]=100;
    for(int i=0;i<=4;i++){
        cout<<array[i]<<" ";
    }
}