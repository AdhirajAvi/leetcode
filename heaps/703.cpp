#include <bits/stdc++.h>
using namespace std;

// need to create obj if int main needed oops me chle jaoge, isiko seekho yehi leetcode me kaam aayega!!!!!!!!
// class KthLargest
// {
// public:
// int k;
//     priority_queue<int, vector<int>, greater<int>> pq;
//     KthLargest(int k, vector<int> &nums)
//     {
//        this->k = k;

//         for (int num : nums) {
//             pq.push(num);

//             if (pq.size() > k) {
//                 pq.pop();
//             }
//         }
//     }

//     int add(int val)
//     {
//         pq.push(val);

//         if (pq.size() > k) {
//             pq.pop();
//         }

//         return pq.top();
//     }
// };

// int main(){
//     KthLargest(k, nums);
//     int add(val);
// }

// maxHeap!!!!!!!!
// class KthLargest {
// public:
//     int k;
//     priority_queue<int> pq;

//     KthLargest(int k, vector<int>& nums) {
//         this->k = k;

//         for (int num : nums) {
//             pq.push(num);
//         }
//     }

//     int add(int val) {
//         pq.push(val);

//         priority_queue<int> temp = pq;

//         for (int i = 1; i < k; i++) {
//             temp.pop();
//         }

//         return temp.top();
//     }
// };

// minHeap!!!!!!!!
class KthLargest
{
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> pq;

    KthLargest(int k, vector<int> &nums)
    {
        this->k = k;

        for (int num : nums)
        {
            pq.push(num);

            if (pq.size() > k)
            {
                pq.pop();
            }
        }
    }

    int add(int val)
    {
        pq.push(val);

        if (pq.size() > k)
        {
            pq.pop();
        }

        return pq.top();
    }
};