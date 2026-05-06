#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[5];
    for(int i=(sizeof(arr)/4)-1,k=0;i>=0,k<sizeof(arr2)/4;i--,k++){
            arr2[k]=arr[i];
        }
    for(int j=0;j<sizeof(arr2)/4;j++){
        cout<<arr2[j]<<" ";
    }

    cout<<endl;

 // without making copy of array
    for(int i=(sizeof(arr)/4)-1,k=0;i>=0,k<sizeof(arr)/4;i--,k++){
            arr[k]=arr[i];
        }
    for(int s=0;s<sizeof(arr2)/4;s++){
        cout<<arr2[s]<<" ";
    }
}
// !!!!!!!!imortant!!!!!!!!
// maths bhi socha kro, int j=n-1-i; b[i]=a[j];