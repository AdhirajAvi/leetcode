#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0;i<=a;i++){
        if(i==3 || i==8){
            continue;
        }
        else{
            cout<<i<<endl;
        }
        // if(i!=3 && i!=8){
        //     cout<<i<<endl;
    }
}