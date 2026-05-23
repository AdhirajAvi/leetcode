#include <bits/stdc++.h>
using namespace std;

int main()
{
    // approach-1!!!!!!!!
    vector<int> arr = {1, 2, 3, 4, 5, 6, 1};
    int wnsum = 0;
    int k = 3;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        wnsum += arr[i];
    }
    sum = wnsum;
    for (int j = arr.size() - 1, m = k - 1; j > k, m >= 0; j--, m--)
    {
        wnsum -= arr[m];
        wnsum += arr[j];
        sum = max(sum, wnsum);
    }
    cout << sum << endl;

    return 0;
}
