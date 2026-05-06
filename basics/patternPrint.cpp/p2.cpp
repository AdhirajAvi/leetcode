#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cin>>m;
    cin>>n;
    for(int i=0;i<m;i++){
        for(int j=1;j<=n;j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
}