#include <bits/stdc++.h>
using namespace std;
int main()
{
    string arr = "  hello world  ";
    reverse(arr.begin(), arr.end());
    string lastCall=" ";
    int d=arr.size();
    int j=0;
    for(int i=0; i<arr.size();i++){
        if(arr[0] == ' ' || arr[d-1] == ' ')
        {
            // arr.erase(i);
            arr.erase(arr.begin() + i);
            i--;
        }
        // if(arr[i] == ' ' && arr[i-1] == ' ')
        if(i > 0 && arr[i] == ' ' && arr[i-1] == ' ')
        {
            // arr.erase(i);
            arr.erase(arr.begin() + i);
            i--;
        }
        if(arr[i]==' '){
            // lastCall+=reverse(j, i);
            reverse(arr.begin() + j, arr.begin() + i);
            j=i+1;
        }
        else if(i == arr.size()-1){
            reverse(arr.begin() + j, arr.end());
        }
        }
        cout << arr<<endl;
        cout << arr.size()<<endl;
    }
    

