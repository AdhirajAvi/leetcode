// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // approach-1!!!!!!!!
//     vector<int> arr = {100,4,200,1,3,2};
//     sort(arr.begin(),arr.end());
//     vector<int> arr1;
//     int lengths = 0;
//     // int temp = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         // temp = 0;
//         // vector<int> arr1;
//         arr1.clear();

//         // if (arr[i] == 1)
//         {
//             while(i > 0 && i < arr.size() && arr[i] == arr[i-1] + 1)
//             {
//                 if(find(arr1.begin(), arr1.end(), arr[i-1]) == arr1.end()){
//     arr1.push_back(arr[i-1]);
// }
//                 arr1.push_back(arr[i]);
//                 int temp=arr1.size();
//                 if (temp > lengths)
//                 {
//                     lengths = temp;
//                 }
//                 i++;
//             }
//         }
//     }
//     cout << lengths << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> nums = {100, 4, 200, 1, 3, 2};

//     unordered_set<int> st;
//     int counter=0;

//     for (int x : nums)
//         st.insert(x);

//     for(auto i:st){
//         if(st.find(i-1)==st.end()){
//             counter++;
            
//         }
//     }
    
// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    unordered_set<int> st;

    for (int x : nums)
        st.insert(x);

    int maxi = 0;

    for (int x : st)
    {
        // Start only if x is the first element of a sequence
        if (st.find(x - 1) == st.end())
        {
            int curr = x;
            int len = 1;

            while (st.find(curr + 1) != st.end())
            {
                curr++;
                len++;
            }

            maxi = max(maxi, len);
        }
    }

    cout << maxi;

    return 0;
}