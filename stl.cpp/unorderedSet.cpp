#include<bits/stdc++.h>
using namespace std;

void explainMultiset(){
    // begin, end, size, empty, swap same like vectors
    // unique
    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.emplace(10);

    auto it=s.find(3);
    auto it1=s.find(6);
    auto it2=s.find(7);
    cout<<*it<<endl;
    cout<<*it1<<endl;
    cout<<*it2<<endl;

    s.erase(3);
    // striver wrong 
    // s.erase(s.find(1),s.find(1)+2);
    auto i3=s.find(2);
    auto i4=s.find(4);
    s.erase(i3,i4);

    // doesnt not work
    // auto i5=s.lower_bound(2);
    // auto i6=s.upper_bound(3);
}

int main(){
    explainMultiset();
}
// multiset ka end pdhna he