#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     string arr = "AABABBA";
//     int k = 1;

//     int i = 0;
//     int maxi = 0;
//     int changed = 0;

//     string sum = "";

//     for (int j = 0; j < arr.size(); j++)
//     {
//         // sum += arr[j];
//         if (arr[j] != arr[i])
//         {
//             changed += 1;
//         }

//         while (changed > k)
//         {
//             if (arr[i] != arr[j])
//             {
//                 changed -= 1;
//             }
//             // sum.erase(sum.begin());
//             i++;
//         }

//         maxi = max(maxi, j - i + 1);
//     }

//     cout << maxi << endl;
//     ;
// }


int main()
{
    string arr = "AABABBA";
    int k = 1;
    unordered_map<char, int> mpp;
    int maxiFreq=0;
    int i=0;
    int maxi=0;
    for(int j=0; j<arr.size();j++){
        mpp[arr[j]]++;
        
        maxiFreq=max(maxiFreq, mpp[arr[j]]);

        while((j-i+1)-maxiFreq>k){
            mpp[arr[i]]--;
            i++;
        }
        maxi=max(maxi, j-i+1);
    }
    // maxi=max(maxi, j-i+1);

    // for(auto i:mpp){
    //     cout<<i.first<<endl;
    // }
    cout<<maxi<<endl; 
}


