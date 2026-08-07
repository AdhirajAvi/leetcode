#include<bits/stdc++.h>
using namespace std;

class Node{

    // STRUCT OF NODE
    public:
    int data;
    Node* next;

    // INITIALIZATION
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    } 

    Node(int data1){
        data=data1;
        next=NULL;
    }
};

Node* removeNthnodefromend(Node* head, int n){

    if(head==NULL) return head;

    int counter=0;
    Node* temp=head;

    while(temp!=NULL){
        counter+=1;
        temp=temp->next;
    }

    Node* temp2=head;      // added Node*
    
    Node* dummy=new Node(-1);
    dummy->next = head;
    
    Node* prev=dummy;      // added Node*

    while(temp2!=NULL){
        if(counter==n){
            prev->next=temp2->next;
            delete temp2;
            break;
        }

        counter--;
        prev=temp2;
        temp2=temp2->next;
    }

    head = dummy->next;
    delete dummy;

    return head;
}

int main(){
    return 0;
}


// for vs manual memory management!!!!!!!!
// Node* removeNthFromEnd(Node* head, int n) {

//     if(head == NULL) return NULL;

//     Node* slow = head;
//     Node* fast = head;

//     int cnt = 0;

//     while(fast != NULL){

//         fast = fast->next;
//         cnt++;

//         if(cnt > n){
//             slow = slow->next;
//         }
//     }

//     // Delete head
//     if(cnt == n){
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         return head;
//     }

//     Node* temp = slow->next;
//     slow->next = slow->next->next;
//     delete temp;

//     return head;
// }


// for leetcode auto!!!!!!!!
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {

//         ListNode* slow = head;
//         ListNode* fast = head;

//         int cnt = 0;

//         while (fast != NULL) {

//             fast = fast->next;
//             cnt++;

//             if (cnt > n) {
//                 slow = slow->next;
//             }
//         }

//         // Delete head
//         if (cnt == n) {
//             return head->next;
//         }

//         slow->next = slow->next->next;

//         return head;
//     }
// };