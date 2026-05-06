#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str="adhiraj is good";
    cout<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;
}
// !!!!!!!!important!!!!!!!!
// 1.int--array--vector array, (joki stl form he, yha pe stl ka mtlb he final form)
// 2.char--string (ya ye bhi bol skte he jo yeh alg se bhi array me jaskta he), (string string hi stl, mtlb final form he)