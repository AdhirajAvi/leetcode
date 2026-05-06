#include <iostream>
using namespace std;
void usa(){
    cout<<"you are in usa"<<endl;
    return;
    cout<<"you are in usa2"<<endl;
}
void india(){
    cout<<"you are in india"<<endl;
    usa();
    return;
}
int main(){
    cout<<"adhiraj"<<endl;
    india();
}
// process--
// 1.main()
// 2.india()
// 3.usa()
// 4.india()
// 5.main()