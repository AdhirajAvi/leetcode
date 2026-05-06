#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        cout<<i<<endl;
        // 12345
    }

    int j;
    for(j=1;j<=5;j++){
        cout<<j<<endl;
        // 12345
    }
    cout<<j<<endl;
    // 6, because after loop ends j++ will be there

    // for(int i=1;i<=5;i++){
    //     cout<<i<<endl;
        // 12345
    // }
    // cout<<i<<endl;
    // not declared,yk
}
// yk formal parameters and actual parameters in functions