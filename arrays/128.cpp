#include <bits/stdc++.h>
using namespace std;

int main()
{
    // approach-1!!!!!!!!
    vector<int> arr = {100,4,200,1,3,2};
    sort(arr.begin(),arr.end());
    vector<int> arr1;
    int lengths = 0;
    // int temp = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        // temp = 0;
        // vector<int> arr1;
        arr1.clear();

        // if (arr[i] == 1)
        {
            while(i > 0 && i < arr.size() && arr[i] == arr[i-1] + 1)
            {
                if(find(arr1.begin(), arr1.end(), arr[i-1]) == arr1.end()){
    arr1.push_back(arr[i-1]);
}
                arr1.push_back(arr[i]);
                int temp=arr1.size();
                if (temp > lengths)
                {
                    lengths = temp;
                }
                i++;
            }
        }
    }
    cout << lengths << endl;

    return 0;
}
