#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "cbbd";
    string sum="";
    for(int i=0;i<s.size();i++){
        // string temp=s;
        string temp="";
        // if(s.size()/2!=0){
            for(int j=i-1,m=i+1;j>=0 && m<s.size();j--,m++){
            // if(s[j]!=s[m])
            if(s[j]==s[m]){
                // temp=s[m-j];
                for(int k = j; k <= m; k++){
                    temp += s[k];
                }
            }
            else{
                break;
            }
        }
        if(temp.size()>sum.size()){
            sum=temp;
        }
        // }

        
        // else if(s.size()/2==0){
            for(int j=i,m=i+1;j>=0 && m<s.size();j--,m++){
            // if(s[j]!=s[m])
            if(s[j]==s[m]){
                // temp=s[m-j];
                for(int k = j; k <= m; k++){
                    temp += s[k];
                }
            }
            else{
                break;
            }
        }
        if(temp.size()>sum.size()){
            sum=temp;
        }
        // }
    }
    cout<<sum<<endl;
    return 0;
}

    
