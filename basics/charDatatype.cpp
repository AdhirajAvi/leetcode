#include <iostream>
using namespace std;
int main(){
    // for giving ascii value of a character
    char ch;
    cin>>ch;
    cout<<(int)ch<<endl;
    // for giving character ascii value of a number
    int x;
    cin>>x;
    // both correct
    cout<<(char)x<<endl;

    ch = (char)x;
    cout<<ch<<endl;
}
    
    