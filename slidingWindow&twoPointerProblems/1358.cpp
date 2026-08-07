#include <bits/stdc++.h>
using namespace std;
// int main(){
//     string s = "abcabc";
// for(int j=0;j<s.size();j++){
//     while()
// }
int main()
{
    string s = "abcabc";
    // for(int j=0;j<s.size();j++){
    //     while()
    // }

    int i = 0;
    int ans = 0;

    unordered_map<char, int> mp;

    for (int j = 0; j < s.size(); j++)
    {

        mp[s[j]]++;

        while (mp['a'] > 0 &&
               mp['b'] > 0 &&
               mp['c'] > 0)
        {

            ans += s.size() - j;

            mp[s[i]]--;

            i++;
        }
    }

    cout<<ans<<endl;
    return 0;
}


// brute(your logic)!!!!!!!!
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s = "abcabc";

//     int count = 0;

//     for (int i = 0; i < s.size(); i++)
//     {
//         int a = 0, b = 0, c = 0;

//         for (int j = i; j < s.size(); j++)
//         {
//             if (s[j] == 'a')
//                 a++;
//             else if (s[j] == 'b')
//                 b++;
//             else if (s[j] == 'c')
//                 c++;

//             if (a > 0 && b > 0 && c > 0)
//                 count++;
//         }
//     }

//     cout << count;
// }