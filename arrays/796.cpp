#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcde";
    string goal = "cdeab";

    bool found = false;

    if (s.size() == goal.size())
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s == goal)
            {
                found = true;
                break;
            }

            char ch = s[0];
            s.erase(s.begin());
            s.push_back(ch);
        }
    }

    if (found)
        cout << "true";
    else
        cout << "false";

    return 0;
}