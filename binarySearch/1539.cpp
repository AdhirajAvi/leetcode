#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int k)
{

    int low = 0;
    int high = arr.size() - 1;
    int s = arr[arr.size() - 1];
    // int m = high - low + 1;
    int m = arr[high] - (high + 1);

    if (k > m)
    {
        return ((k - m) + arr[high]);
    }

    else if (k < m)
    {
        while (low <= high)
        {

           int mid = low + (high - low) / 2;
            // if (arr[mid] == k)
            // {
            //     return mid;
            // }

            if (arr[mid] < k)
            {
                low = mid + 1;
            }

            // else if (arr[mid] > k)
            else
            {
                high = mid - 1;
            }
            return low - 1 + arr[low];
        }
    }
}

int main()
{

    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;

    cout << binarySearch(arr, k) << endl;
}