#include<iostream>
using namespace std;
int main(){
    // !!!!!!!!important!!!!!!!!

    int array[5];

    // array[0]=6;
    // array[1]=2;
    // array[2]=8;
    // array[3]=5;
    // array[4]=0;
    // cout<<array[3]<<endl;
    // insert
    for(int i=0;i<=4;i++){
        cin>>array[i];
    }
    for(int i=0;i<=4;i++){
        cout<<array[i]<<" ";
    }
    // input kese bhi dedo sahi he, lekin loop poore input lene ke baad hi khtm hoga, poora array ke elements hi lega
    // 1 2 3 4 5
    // or
    // 1
    // 2
    // 3
    // 4
    // 5
    // or
    // 1 2 3
    // 4
    // 5
}