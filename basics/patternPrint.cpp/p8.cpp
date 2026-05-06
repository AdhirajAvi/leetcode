#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        if (i == m / 2)
        {
            for (int k = 0; k < m; k++)
            {
                cout << "*";
            }
            // earlier didnt put endl, thats why formatting error
            cout << endl;
        }
        else
        {
            // for(int j=0;j<=ceil(m/2);j++){
            for (int j = 0; j < m; j++)
            {
                if (j == m / 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}
// #include<iostream>
// using namespace std;

// int main(){
//     int m;
//     cin>>m;

//     for(int i=0;i<m;i++){   // fixed <=
//         if(i==m/2){         // removed ceil
//             for(int k=0;k<m;k++){
//                 cout<<"*";
//             }
//             cout<<endl;     // added
//         }
//         else{
//             for(int j=0;j<m;j++){   // fixed range
//                 if(j==m/2){         // fixed condition
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//             cout<<endl;
//         }
//     }
// }