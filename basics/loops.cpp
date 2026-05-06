#include <iostream>
using namespace std;
int main(){
    // !!!!!!!!important!!!!!!!!
    int j;
    int n;
    cin>>n;
    // both different working
    for(int i=1;i<=n;i=j){
        j=2*i;
        cout<<j<<endl;
    }
    
    int b=1;
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        cout<<b<<endl;
        b=2*b;
    }

    int l;
    int k=0;
    // !!!!!!!!important!!!!!!!!
    // dekho bracket ke baad kyu lika-- cout<<k<<endl; kyuki ye bahar likha he int k=0; isme store hochuka he toh isko print kiya
    cin>>l;
    for(int i=1;i<=l/2;i++){
        if(l%i==0){
            k=i;
        }
    }
    // for(int i=1;i<=l/2;i++){
    //     k=(l%i==0);
    // }
    cout<<k<<endl;

    int p;
    cin>>p;
    for(int i=p/2;i>=0;i--){
    // for(int i=p/2;i=0;i--){ --wrong, > should be there for loop work
        if(p%i==0){
            cout<<i;
            break;
            // to get out of loop
        }
    }
}