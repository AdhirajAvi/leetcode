#include<iostream>
using namespace std;

int printnum(int a){
    // !!!!!!!!important!!!!!!!!
    if(a==1){
        return a;
    }
    return a=a*printnum(a-1);
    // jb ye above return likha toh right side se soch ke likho kyuki pehle right se code chlta he, left se sochke likhoge toh confuse hojaoge
    
    // 1.printnum(a-1);
    // 2.a*printnum(a-1);
    // 3.return a=
    // 4.return a=a*printnum(a-1);
    
    // yane 5 diya 
    // phir woh yha jayega a*printnum(a-1);
    // right now no value to store ussne direct call lga diya
    // phir esa krte krte if(a==1){
    //     return a;
    // } yha pohocha
    // phir backtrack krke value sbko milegi 
    // phir return a= me store hogi aur saari value milne ke baad return hojayega
}

int main(){
    int x;
    cin>>x;
    cout<<printnum(x);
}