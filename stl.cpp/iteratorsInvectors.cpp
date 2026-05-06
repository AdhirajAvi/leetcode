#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);

    // iterator!=loop

    vector<int>::iterator it =v.begin(); it++;
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    // vector<int>::iterator it =v.end();

    // or

    auto it1=v.begin(); it1++;
    cout<<*it1<<endl;;
    // auto it1=v.end();

    // view like an array, yk
    cout<<v[0]<<endl;
    cout<<v.back()<<endl;

}

int main(){
    explainVector();
}
