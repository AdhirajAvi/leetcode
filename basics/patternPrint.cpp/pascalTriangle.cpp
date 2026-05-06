#include<iostream>
using namespace std;

int nums(int p){
    int o=1;
    for(int k=p;k>0;k--){
        o=o*k;
    }
    return o;
}

int ncr(int& x,int& y){
    int e=nums(x);
    int f=nums(y);
    int h=nums(x-y);
    return e/(f*h);
}

int main(){
    int m;
    cin>>m;
    // while(m<=n){
    //     cout<<
    // }
    for(int i=0;i<=m;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j);
        }
        cout<<endl;
    }
} 