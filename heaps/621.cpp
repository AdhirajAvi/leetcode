#include <bits/stdc++.h>
using namespace std;

int main()
{
    // brute force!!!!!!!!
    // vector<char> tasks = {'A','A','A','B','B','B'};
    // int n = 2;

    // vector<int> freq(26, 0);
    // vector<int> nextAvailable(26, 0);

    // // Count frequencies
    // for (int i = 0; i < tasks.size(); i++)
    // {
    //     freq[tasks[i] - 'A']++;
    // }

    // int remaining = tasks.size();
    // int time = 0;

    // while (remaining > 0)
    // {
    //     int task = -1;

    //     // Find an available task
    //     for (int i = 0; i < 26; i++)
    //     {
    //         if (freq[i] > 0 && nextAvailable[i] <= time)
    //         {
    //             task = i;
    //             break;
    //         }
    //     }

    //     if (task != -1)
    //     {
    //         freq[task]--;
    //         remaining--;

    //         nextAvailable[task] = time + n + 1;
    //     }

    //     time++;
    // }

    // cout << time << endl;

    // return 0;

    
    // heap+hashMap
    vector<char> tasks = {'A', 'A', 'A', 'B', 'B', 'B'};
    int n = 2;

    unordered_map<char, int> freq;

    // Count frequencies
    for (int i = 0; i < tasks.size(); i++)
    {
        freq[tasks[i]]++;
    }

    // Max heap
    priority_queue<int> pq;

    for (auto it : freq)
    {
        pq.push(it.second);
    }

    // {remaining frequency, available time}
    queue<pair<int, int>> q;

    int time = 0;

    while (!pq.empty() || !q.empty())
    {
        time++;

        // Execute most frequent task
        if (!pq.empty())
        {
            int cnt = pq.top();
            pq.pop();

            cnt--;

            if (cnt > 0)
            {
                q.push({cnt, time + n});
            }
        }

        // Bring back cooled-down task
        if (!q.empty() && q.front().second == time)
        {
            pq.push(q.front().first);
            q.pop();
        }
    }

    cout << time << endl;

    return 0;
}
