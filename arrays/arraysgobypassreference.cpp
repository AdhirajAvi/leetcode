#include<iostream>
using namespace std;

void changearr(int x[]){
    // !!!!!!!!important!!!!!!!!
    // variables passby value rehtehe-- inhe passbyreference krte he & se ya ptr se
    // arreays passbyreference hote he-- jesse ye example, yane normal
    x[0]=9;
}

int main(){
    int arr[3]={1,2,3};
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    changearr(arr);
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
}