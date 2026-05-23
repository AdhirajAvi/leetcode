#include <bits/stdc++.h>
using namespace std;

int main()
{
    // wrong approach!!!!!!!!
    
    // vector<int> arr = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    // int k=3;
    // int sum=0;
    // int counter=0;
    // for(int i=0;i<k;i++){
    //     sum+=arr[i];
    // }
    // int maxi=sum;
    // for(int j=k,m=(k-1);j<arr.size() && m<arr.size();j++,m++){
    //     if(arr[j]==1){
    //         maxi+=1;
    //     }
    //     // else if(arr[m]==0 || arr[j]==0){
    //     // }
    //     if(arr[m]==0 && counter!=k){
    //         // arr[m]=1;
    //         maxi+=1;
    //         counter+=1;
    //     }
    //     else if(arr[j]==0 && counter!=k){
    //         // arr[j]=1;
    //         maxi+=1;
    //         counter+=1;
    //     }
    //     else if(counter==k){
    //         sum=max(maxi,sum);
    //         maxi=0;
    //     }
    // }
    // cout<<sum<<endl;

    vector<int> arr = {0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1};

    int k = 3;

    int i = 0;
    int zeroes = 0;
    int maxi = 0;

    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] == 0)
        {
            zeroes++;
        }

        while (zeroes > k)
        {
            if (arr[i] == 0)
            {
                zeroes--;
            }

            i++;
        }

        maxi = max(maxi, j - i + 1);
    }

    cout << maxi << endl;
    return 0;
}
