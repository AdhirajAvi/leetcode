#include<iostream>
using namespace std;

int main(){
    char array[7]={'a','d','h','i','r','a','j'};
    // !!!!!!!!important!!!!!!!!
    // string type ek array he jo builtin he, taaki normally use krpaye
    // char uses single quotes ' '
    // string uses double quotes " "

    for(int i=0;i<=7;i++){
        cout<<array[i];
    }
    cout<<endl;

    string arr={"adhiraj is learning!!"};
    cout<<arr<<endl;
    // or
    // for(int i=0;i<=arr.length();i++){
    //     cout<<arr[i];
    // }

    string a;
    // cin>>a;
    getline(cin,a);
    cout<<a<<endl;
    // or
    // for(int i=0;i<=a.length();i++){
    //     cout<<a[i];
    // }

    // int b,c;
    // cin>>b>>c;
    // cout<<b<<" "<<c<<endl;
    // cin ki glti ye he ki space aya toh woh 2nd input manta he toh in strings ye use nhi kiya jaskta yk, so 
    
}