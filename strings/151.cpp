// beginner approach!!!!!!!!
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string arr = "  hello world  ";
//     reverse(arr.begin(), arr.end());
//     string lastCall=" ";
//     int d=arr.size();
//     int j=0;
//     for(int i=0; i<arr.size();i++){
//         if(arr[0] == ' ' || arr[d-1] == ' ')
//         {
//             // arr.erase(i);
//             arr.erase(arr.begin() + i);
//             i--;
//         }
//         // if(arr[i] == ' ' && arr[i-1] == ' ')
//         if(i > 0 && arr[i] == ' ' && arr[i-1] == ' ')
//         {
//             // arr.erase(i);
//             arr.erase(arr.begin() + i);
//             i--;
//         }
//         if(arr[i]==' '){
//             // lastCall+=reverse(j, i);
//             reverse(arr.begin() + j, arr.begin() + i);
//             j=i+1;
//         }
//         else if(i == arr.size()-1){
//             reverse(arr.begin() + j, arr.end());
//         }
//         }
//         cout << arr<<endl;
//         cout << arr.size()<<endl;
//     }
    

// 2 pointer!!!!!!!!
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s = "  the sky   is blue  ";
//     string ans = "";

//     int i = s.size() - 1;

//     while (i >= 0)
//     {
//         // Skip spaces
//         while (i >= 0 && s[i] == ' ')
//             i--;

//         if (i < 0)
//             break;

//         int j = i;   // end of current word

//         // Move to beginning of word
//         while (i >= 0 && s[i] != ' ')
//             i--;

//         // Add space before next word (not before first word)
//         if (!ans.empty())
//             ans += " ";

//         // Add current word
//         ans += s.substr(i + 1, j - i);
//     }

//     cout << "Reversed string: " << ans << endl;

//     return 0;
// }


// stack!!!!!!!!
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "  the sky   is blue  ";

    stack<string> st;
    int n = s.size();
    int i = 0;

    while (i < n)
    {
        // Skip spaces
        while (i < n && s[i] == ' ')
            i++;

        // No more words left
        if (i == n)
            break;

        string word = "";

        // Form the word
        while (i < n && s[i] != ' ')
        {
            word += s[i];
            i++;
        }

        st.push(word);
    }

    string ans = "";

    while (!st.empty())
    {
        ans += st.top();
        st.pop();

        if (!st.empty())
            ans += " ";
    }

    cout << "Reversed string: " << ans << endl;

    return 0;
}
