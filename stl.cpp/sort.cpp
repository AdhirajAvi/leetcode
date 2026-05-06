#include<bits/stdc++.h>
using namespace std;

void explainSort(){
    vector<int> arr={12,35,1,24,5};
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // for array
    // sort(arr,arr+n);
    // sort(arr+2,arr+4);
    // sort(arr,arr+n, greater<int>);

    // for vector
    sort(arr.begin(),arr.end());
    // sort(arr.begin()+2,arr.end()+4);
    sort(arr.begin(),arr.end(), greater<int>());
    for(auto i:arr){
        cout<<i<<" ";
    }
}

bool comp(pair<int,int> p1, pair<int,int> p2){

    // sort my way, any way for any data types in question in array and vector both

    // sort in according to second element
    // if second element same then sort
    // it according to first element but in descending
    if(p1.second<p2.second){return true;}
    if(p1.second>p2.second){return false;}
    if(p1.first<p2.first){return true;}
    else{return false;}
}

int main(){
    explainSort();
    vector<pair<int,int>> arr1={{12,35},{1,24},{72,5}};
    sort(arr1.begin(),arr1.end(),comp);
    for(auto i : arr1){
        cout << i.first << " " << i.second << endl;
    }

}