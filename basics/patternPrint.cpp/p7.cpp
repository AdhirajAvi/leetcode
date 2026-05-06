#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    bool flag=true;
    for(int i=1;i<=m;i++){
        if(flag==true && i%2==0){
            flag=false;
            }
        if(flag==false && i%2!=0){
            flag=true;
        }
        for(int k=1;k<=i;k++){
                cout<<flag;
                if(flag==false){
                flag=true;}
                else{
                    flag=false;
                }
            }
            cout<<endl;
        }}
