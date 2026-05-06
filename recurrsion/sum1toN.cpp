#include<iostream>
using namespace std;
int printnum(int a){
    if(a==0){return 0;} 
    // base case
    int b=0;
    int k=printnum(a-1);
    // call
    b=k+a;
    // work
    return b;
}

int main(){
    int x;
    cin>>x;
    cout<<printnum(x)<<endl;
}
// 🔥 One-line rule (remember this)
// 👉 If recursion is used to build an answer → store/return it
// 👉 If recursion is used to perform an action → no need to store
// wese toh void me bhi kuch lgega hi store krne ke liye lekin koi tarika se hi hoga kyuki woh actual store nhi krpayega int jesa lekin yk hm sum jese ke liye usse use nhi krenge, int ko hi krenge toh build krne ke liye bhi store krna pdega result yk