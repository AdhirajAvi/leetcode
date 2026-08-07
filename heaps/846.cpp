#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> hand = {1,2,3,6,2,3,4,7,8};
    // int groupSize = 3;

    // priority_queue<int, vector<int>, greater<int>> pq;
    // int counter=0;
    // for(int i=0;i<hand.size();i++){
    //     pq.push(hand[i]);
    // }
    // int temp=pq.top();
    // pq.pop();

    // while(!pq.empty()){
    //     if(counter!=0 && temp+1!=pq.top()){
    //         cout<<false<<endl;
    //         return 0;
    //     }
    //     temp=pq.top();
    //     pq.pop();
    //     counter++;
    //     if(counter==groupSize){
    //         counter=0;
    //     }

    // }
    // cout<<true<<endl;
    // return 0;


    // right one!!!!!!!!
    vector<int> hand = {1, 2, 3, 6, 2, 3, 4, 7, 8};
    int groupSize = 3;
    if (hand.size() % groupSize != 0)
    {
        cout << false << endl;
        return 0;
    }
    unordered_map<int, int> freq;
    // Count frequencies
    for (int i = 0; i < hand.size(); i++)
    {
        freq[hand[i]]++;
    }
    // Min heap of distinct numbers
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto it : freq)
    {
        pq.push(it.first);
    }
    while (!pq.empty())
    {
        int start = pq.top();
        // Try to form one group
        for (int i = start; i < start + groupSize; i++)
        {
            if (freq[i] == 0)
            {
                cout << false << endl;
                return 0;
            }
            freq[i]--;
            if (freq[i] == 0)
            {
                if (pq.top() != i)
                {
                    cout << false << endl;
                    return 0;
                }

                pq.pop();
            }
        }
    }
    cout << true << endl;

    return 0;
}
