#include <iostream>
using namespace std;

void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

void swappassbyreference(int& a,int& b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=12;
    int y=5;
    int a;
    cin>>a;
    int b;
    cin>>b;

    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<endl<<y<<endl;

    // no swapping because dimag chla thora woh main ko dekheke kr rha he ya passbyvalue bolo ya scope type ya dbba nhi gya
    swap(a,b);
    cout<<a<<endl<<b;
    // will swap kyuki ab woh dbba jyega, nito video dekh smjh ayega
    swappassbyreference(a,b);
    cout<<a<<endl<<b;
}
// Golden Rule
// Situation	Use
// Just read value	pass by value
// Modify original	pass by reference
// Large data	pass by reference
// Read-only large data	const &
// 🚀 One-line intuition
// Pass by value → “copy de diya”
// Pass by reference → “original de diya”