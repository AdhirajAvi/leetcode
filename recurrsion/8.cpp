#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "";
    bool flag = 0;
    string ans="";

    int j = 0;
    for (j = 0; j < s.size(); j++)
    {
        if (s[j] != ' ')
        {
            break;
        }
    }
    s.erase(s.begin(), s.begin() + j);

    int k = s.size()-1;
    for (k= s.size()-1;k >0; k--)
    {
        if (s[j] != ' ')
        {
            break;
        }
    }
    s.erase(s.begin(), s.begin() + j);

    for (int i = 0; i < s.size(); i++)
    {

        // if(s[i]==' '){
        //     continue;
        // }

        // if(i==0 && s[i]=='-'){
        //     flag=1;

        // }
        if (i != 0 && s[i] == '-')
        {
            return 0;
        }

        else if ((int(s[i]) >= 65 && int(s[i]) <= 90) || (int(s[i]) >= 97 && int(s[i]) <= 122))
        {
            break;
        }
        else
        {
            ans += s[i];
        }
    }

    if(ans==""){
        cout<<0<<endl;
        return 0;
    }
    int num = stoi(ans);
    cout << num;
    return 0;
}
