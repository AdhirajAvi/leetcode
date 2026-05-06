#include<iostream>
using namespace std;
int main(){
    // !!!!!!!!important!!!!!!!!
    int x=3;
    int* ptr=&x;

    cout<<x<<endl;

    cout<<&x<<endl;
    cout<<ptr<<endl;
    // obvious ptr==&x, whi toh store kiya he
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
}
// !!!!!!!!ptr can also be used for-- accessing the value of the variable whose address is in the pointer-- using dereference(*) operator or star operator 
