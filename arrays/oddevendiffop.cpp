#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<sizeof(arr)/4;i++){
        if(i%2!=0){
            arr[i]*=2;
        }
        else{
            arr[i]+=10;
        }
    }
    for(int j=0;j<sizeof(arr)/4;j++){
        cout<<arr[j]<<" ";
    }
}