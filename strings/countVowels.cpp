#include<iostream>
using namespace std;

int main(){
    string arr;
    getline(cin,arr);
    int counter=0;
    for(int i=0;i<arr.length();i++){
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='s'){
            counter++;
        }
    }
    cout<<counter<<endl;
}