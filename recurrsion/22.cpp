// #include <bits/stdc++.h>
// using namespace std;

// void gResultbinarystrings(int &n, string s, vector<string> &result){
//     if(s.size()==n){
//         result.push_back(s);
//         return;
//     }

//     if(s.empty() || s.back()!='('){
//     s.push_back('(');

//     // gResultbinarystrings(n, s, result);
//     // s.pop_back();
//     }
//     else{
//         s.push_back(')');
//     }
//     gResultbinarystrings(n, s, result);

//     // if(s.empty() || s.back()!='1'){
//         s.push_back('1');
//         // gResultbinarystrings(n, s, result);
//         s.pop_back();
//     // }
//     return;

// }

// vector<string> gBinarystrings(int &n){
//     vector<string> result;
//     string s="";
//     gResultbinarystrings(n, s, result);
//     return result;
// }

// int main(){

//     int n = 3;
//     vector<string> ans=gBinarystrings(n);

//     for(auto i: ans){
//         cout<<i<<endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void gResultParenthesis(int &n, int open, int close,
                        string &s,
                        vector<string> &result)
{
    // Base case
    if (s.size() == 2 * n)
    {
        result.push_back(s);
        return;
    }

    // Take '('
    if (open < n)
    {
        s.push_back('(');
        gResultParenthesis(n, open + 1, close, s, result);
        s.pop_back();
    }

    // Take ')'
    if (close < open)
    {
        s.push_back(')');
        gResultParenthesis(n, open, close + 1, s, result);
        s.pop_back();
    }
}

vector<string> gParenthesis(int &n)
{
    vector<string> result;
    string s = "";

    gResultParenthesis(n, 0, 0, s, result);

    return result;
}

int main()
{
    int n = 3;

    vector<string> ans = gParenthesis(n);

    for (auto i : ans)
    {
        cout << i << endl;
    }

    return 0;
}