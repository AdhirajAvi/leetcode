#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int k=0;k<m-i;k++){
                cout<<" ";
        }
        for(int j=0;j<i;j++){ 
            cout<<"*";
        }
        cout<<endl;
    }
}