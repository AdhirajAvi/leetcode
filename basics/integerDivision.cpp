#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    int counter=0;
    while(a!=0){
        a=a/10;
        counter+=1;
        // if(a/10==0){
        //     counter+=1;
        // }
    }
    // int sum = 0;
    // while (a != 0) {
    //     int digit = a % 10;  // extract last digit
    //     sum += digit;        // add it
    //     a = a / 10;          // remove last digit
    // }
    // cout << sum << endl;
    cout<<counter<<endl;

    // int num;
    // int ldt;
    // int leftnum;
    // cin>>num;
    // int reversedgt=0;
    // while(num!=0){
    //     ldt=num%10;
    //     leftnum=num/10;
    //     int countertwo=0;
    //     while(num!=0){
    //         num=num/10;
    //         countertwo+=1;
    //     }
    //     int power=countertwo;
    //     ldt=ldt*(int)pow(10,power-1);
    //     reversedgt+=ldt;
    //     num=leftnum;
    // }
    // not a ideal reverse number

}
// above are length counter and number addition like 65, 543

