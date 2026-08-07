#include <bits/stdc++.h>
using namespace std;

void letterResult(string digits, unordered_map<char, string> mpp, int idx, vector<string> &ans, string s){

    if(idx == digits.size()){
    ans.push_back(s);
    return;
    }
    // for(int i=idx; i <digits.size(); i++){
    //     s.push_back(digits[i]);
    //     letterResult(digits, mpp, idx+1, ans, s);
    //     s.pop_back();
    // }
    string letters = mpp[digits[idx]];
    for(char ch : letters){
        s.push_back(ch);
        letterResult(digits, mpp, idx + 1, ans, s);
        s.pop_back();
}
}

vector<string> letterCombinations(string digits)
{

    unordered_map<char, string> mpp = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
    vector<string> ans;
    string s="";
    letterResult(digits, mpp, 0, ans, s);
    return ans;
}

int main(){
    string digits="23";
    vector<string> result=letterCombinations(digits);
    for(auto i:result){
        cout<<i<<endl;
    }
    return 0;
}