#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str="adhiraj is good";
    cout<<str<<endl;
    int n=str.length();
    reverse(str.begin(),str.begin()+n/2);
    cout<<str<<endl;

    int i=0;
    int j=n/2;
    // int j=n/2-1;
    while(i<j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    // arey ye yehi method he
    // for(int i=0,int k=0;i<0,j<0...........)
    cout<<str<<endl;
}
