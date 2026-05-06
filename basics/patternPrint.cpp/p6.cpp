#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    bool flag=true;
    for(int i=1;i<=m;i++){
        for(int k=0;k<i;k++){
            cout<<flag;
            if(flag==true){
                flag=false;
            }
            else{
                flag=true;
            }
        }
        cout<<endl;
    }
}