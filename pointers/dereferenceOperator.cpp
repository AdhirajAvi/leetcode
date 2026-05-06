#include<iostream>
using namespace std;
int main(){
    // obvious, we can update x by ptr also like we update x by x, yk
    int x = 12;
    int* ptr= &x;
    cout<<x<<endl;
    *ptr=23;
    cout<<x<<endl; 
}
