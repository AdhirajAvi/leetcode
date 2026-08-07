// approach-1(isme memory leak hogi, ek aur traversal use krna pdega 
// ek node ke next ko NULL krne ke liye, but still tc and sc will be more)!!!!!!!!

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     public:
//     Node(int data1, Node* next1){
//         data=data1;
//         next=next1;
//     } 

//     Node(int data1){
//         data=data1;
//         next=NULL;
//     }
// };

// Node* tempMover(Node* head){
//     Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     return temp;
// }   

// Node* rotateList(Node* head, int &k){
//     // int checkCounter=0;

//     if(k==0){
//         return head;
//     }
//     else{
//         k-=1;
//         Node* temp=tempMover(head);
//         Node* dummy=new Node(temp->data);
//         dummy->next=head;
//         head=dummy;
//         delete temp;
//     }
// }

// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     int k = 2;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }

    Node(int data1){
        data=data1;
        next=NULL;
    }
};

Node* rotateList(Node* head,int k){
    if(head==NULL || head->next==NULL || k==0)
        return head;

    Node* tail=head;
    int len=1;

    while(tail->next!=NULL){
        tail=tail->next;
        len++;
    }

    k=k%len;
    if(k==0)
        return head;

    tail->next=head;
    int move=len-k;
    Node* newTail=head;

    for(int i=1;i<move;i++){
        newTail=newTail->next;
    }
    Node* newHead=newTail->next;
    newTail->next=NULL;

    return newHead;
}