#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> g = {1,2};
    // // vector<int> temp=g;
    // vector<int> s = {1,2,3};
    // int count=0;

    // for(int i=0;i<g.size();i++){
    //     for(int j=0;j<s.size();j++){
    //         if(g[i]<=s[j]){
    //             s[j]=-1;
    //             // temp.erase(temp.begin() + i);
    //             count+=1;
    //             break;
    //         }
    //     }
    // }
    // cout<<count<<endl;

    // optimal approach!!!!!!!!
//     vector<int> g ={10,9,8,7};
//     vector<int> s ={5,6,7,8};
//     int count=0;
//     sort(g.begin(), g.end());
//     sort(s.begin(), s.end());

//     int i=0;
//     int j=0;
//     while(i<g.size() && j<s.size()){
//             if(g[i]<=s[j]){
//                 s[j]=-1;
//                 count+=1;
//                 i++;
//             }
//             else{
//                 j++;
//             }
//     }
//     cout<<count<<endl;
//     return 0;
// }

    vector<int> g ={10,9,8,7};
    vector<int> s ={5,6,7,8};
    int count=0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int i=0;
    int j=0;
    while(i<g.size() && j<s.size()){
            if(g[i]<=s[j]){
                // s[j]=-1;
                count+=1;
                i++;
                j++;
            }
            else{
                j++;
            }
    }
    cout<<count<<endl;
    return 0;
}

