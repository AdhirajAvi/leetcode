#include<iostream>
using namespace std;
int main(){
    int arr[2][2]={{78,61},{13,76}};
    int arr2[2][2]={{78,61},{13,76}};

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr[i][j]=arr[i][j]+arr2[i][j];
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
    }
}