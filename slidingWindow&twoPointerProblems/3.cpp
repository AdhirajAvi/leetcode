#include <bits/stdc++.h>
using namespace std;
int main()
{
    // wrong code, diverted from template

    // string arr = "abcabcbb";
    // int i = 0, j = 0;
    // string sum = "";
    // for (j = 0; j < arr.size(); j++)
    // {
    //     sum += arr[j];

    //     int m = 0;
    //     int counter = 0;
    //     while (m < j)
    //     {
    //         if (arr[m] == arr[j])
    //         {
    //             break;
    //         }
    //         else if(count(sum.begin(), sum.end(), arr[j]) == 2){
    //             counter += 1;
    //         }
    //         m++;
    //     }
    //     i=counter;
    // }
    // int s = j - i;
    // cout << s << endl;
    string arr = "abcabcbb";

    int i = 0;
    int maxi = 0;

    string sum = "";

    for (int j = 0; j < arr.size(); j++)
    {
        sum += arr[j];

        while (count(sum.begin(), sum.end(), arr[j]) > 1)
        {
            sum.erase(sum.begin());
            i++;
        }

        maxi = max(maxi, j - i + 1);
    }

    cout << maxi<< endl;;
}

