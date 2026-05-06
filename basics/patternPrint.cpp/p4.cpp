#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cin>>m;
    cin>>n;
    for(int i=0;i<=m;i++){
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}