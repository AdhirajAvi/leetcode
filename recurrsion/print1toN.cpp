#include<iostream>
using namespace std;

// void printnum(int a){
//     // base case
    
//     if(n==a){
//         return;
//     }
//     cout<<n<<endl;
//     printnum(n+1);
// }

// int main(){
//     int n=1;
//     int x;
//     cin>>x;
//     printnum(x);
// }
// int n bhar loop me declare kr skte he but not in func, as ek loop doosre loop ke andr ke variable ko use nhi kr skta wese hi ek func doosre func ke ander ke declared variable ko use nhi krskta, but pta chla he ki ptr or address value se krskte he, ptr whi particular byte uthata he, yk

// for reversing the recurrsion or backtracking the recurresion then print just swap call and work, but backtrack toh woh krta hi but call ke baad kuch work nhi hota toh khtm hojata he 
void printnum(int a){
    if(a==0){return;} 
    // base case
    printnum(a-1);
    // call
    cout<<a<<endl;
    // work
}

int main(){
    int x;
    cin>>x;
    printnum(x);
}