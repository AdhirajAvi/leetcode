#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> bills = {5,5,5,10,20};

    // bugged brute approach!!!!!!!!
    // bool flag=1;
    // for(int i=0;i<bills.size();i++){
    //     if(bills[i]==10 && find(bills.begin(), bills.begin()+i, 5)== bills.begin()+i){
    //         flag=0;
    //         break;
    //     } 
    //     if(bills[i]==20 && find(bills.begin(), bills.begin()+i, 5)== bills.begin()+i && find(bills.begin(), bills.begin()+i, 10)== bills.end()){
    //         flag=0;
    //     } 
    //     else if(bills[i]==20 && ((find(bills.begin(), bills.begin()+i, 5)== bills.begin()+i && find(bills.begin(), bills.begin()+i, 10)== bills.end()) ||(find(bills.begin(), bills.begin()+i, 5)== bills.begin()+i && count(bills.begin(), bills.begin()+i, 5)>=3))){
    //         flag=0;
    //         break;
    //     }   
    //     else if(bills[i]==10){
    //         auto ind=find(bills.begin(), bills.begin()+i, 5);
    //         // bills.erase(ind);
    //         bills[*ind]=-1;
    //     }
    //     else if(bills[i]==20){
    //         if(find(bills.begin(), bills.begin()+i, 10)!=bills.begin()+i){
    //         auto ind1=find(bills.begin(), bills.begin()+i, 5);
    //         auto ind2=find(bills.begin(), bills.begin()+i, 10);
    //         // bills.erase(ind1);
    //         // bills.erase(ind2);
    //         bills[*ind1]=-1;
    //         bills[*ind2]=-1;}
    //         else{
    //             auto ind1=find(bills.begin(), bills.begin()+i, 5);
    //         auto ind2=find(bills.begin(), bills.begin()+i, 5);
    //         // bills.erase(ind1);
    //         // bills.erase(ind2);
    //         bills[*ind1]=-1;
    //         bills[*ind2]=-1;
    //         }
    //     }
    // }
    // if(flag==0){
    //     cout<<false<<endl;
    // }
    // else{
    //     cout<<true<<endl;
    // }

    // optimal approach!!!!!!!!
    bool flag=1;
    int fiveCount=0;
    int tenCount=0;
    for(int i=0;i<bills.size();i++){
        if(bills[i]==5){
            fiveCount++;
        }
        else if(bills[i]==10){
            if(fiveCount>=1){
                tenCount++;
                fiveCount--;
            }
            else{
                flag=0;
                break;
            }
        }
        else{
            if(tenCount>=1 && fiveCount>=1){
                tenCount--;
                fiveCount--;
            }
            else if(fiveCount>=3){
                fiveCount-=3;
            }
            else{
                flag=0;
            }
        }
    } 
    
    if(flag==0){
        cout<<false<<endl;
    }
    else{
        cout<<true<<endl;
    }

    return 0;
}

