#include<bits/stdc++.h>
using namespace std;

int main(){
    // binary of 7=111, so 3 setted bits to 1 out of many 0 bits in memory
    int num=7;
    int cnt=__builtin_popcount(num);
    cout<<cnt<<endl;
    long long num1=1656547567345;
    int cnt1=__builtin_popcountll(num1);

     // generates next lexicographical permutation
    string a="123";
    while(next_permutation(a.begin(),a.end())){
        cout<<a<<endl;
    }

    // Function	Purpose
    // max(a,b)	compare two values
    // max_element()	maximum in array/vector
    vector<int> arr={12,35,1,24,5};
    int maxi=*max_element(arr.begin(),arr.end());

    int arr1[] = {1,5,2,9};
    int maxi1 = *max_element(arr1, arr1+4);
    int mini = *min_element(arr1, arr1+4);
}