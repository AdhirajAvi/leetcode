#include<iostream>
using namespace std;
int main(){
    // declaration and initialization through no input
    int array[5]={4,1,3,7,3};
    int array[]={4,1,3,7,3};
    // here above both right but not in cin

    for(int i=0;i<=4;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    // multiplying by 2 in output
    for(int i=0;i<=4;i++){
        cout<<array[i]*2<<" ";
    }
    cout<<endl;
    // reversearray
    for(int i=4;i>=0;i--){
        cout<<array[i]<<" ";
    }
}