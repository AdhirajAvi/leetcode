#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int j=1;
    for(int i=1;i<=m;i++){
        for(int k=0;k<i;k++){
            cout<<j;
        }
        j=j+1;
        cout<<endl;
    }
}