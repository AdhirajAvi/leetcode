#include<iostream>
using namespace std;
int main(){
    // declaration and initialization through no input
    int array[5]={4,1,3,7,3};
    int nums=sizeof(array);
    int n=sizeof(array)/4;
    cout<<nums<<endl;
    cout<<n<<endl;
}
// sizeof--
// char,int,bool,float,long long,,,,,, but comes in bytes so like for int /4 as int takes 4 bytes space in memory
