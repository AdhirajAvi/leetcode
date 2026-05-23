#include<bits/stdc++.h>
using namespace std;

bool comp(pair<char,int> p1, pair<char,int> p2){
    if(p1.second>p2.second){return true;}
    if(p1.second<p2.second){return false;}
    if(p1.first==p2.first){return true;}
    else{return false;}
}

int main(){
    string s = "tree";
        vector<pair<char,int>> countSt;
        for(int i = 0; i < s.size(); i++)
        {
            // skip duplicates
            bool already = false;
            for(int j = 0; j < countSt.size(); j++)
            {
                if(countSt[j].first == s[i])
                {
                    already = true;
                    break;
                }
            }
            if(already) continue;
            int x = count(s.begin(), s.end(), s[i]);
            countSt.push_back({s[i], x});
        }
        sort(countSt.begin(), countSt.end(), comp);
        string ans = "";
        for(auto it : countSt)
        {
            ans += string(it.second, it.first);
        }
        cout<<ans<<endl;
        return 0;
    }

    
