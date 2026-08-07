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

// Node* middleFind(Node* head){
//     Node* slow=head;
//     Node* fast=head;

//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     return slow;
// };

// Node* merge(Node* left, Node* right){
//     Node* dummy(0);
//     Node* temp=&dummy;
//     while(left!=NULL || right!=NULL){
//         if(left->data < right->data){
//             temp->next=left;
//             left=left->next;
//             }
//             else{
//                 temp->next=right;
//                 right=right->next;
//             }

//             temp=temp->next;
//         }

//         if(left!=NULL) temp->next=left;
//         else temp->next=right;


//         }

// Node* sortList(Node* head){

//     if(head==NULL || head->next==NULL){
//         return head;
//     }

//     Node* mid=middleFind(head);
//     // Node* ltHead=merge()
//     Node* rtHead=mid->next;
//     mid->next=NULL;

//     Node* left=sortList(head);
//     Node* right=sortList(rtHead);

//     return merge(left, right); 
// }

// int main(){
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

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

Node* middleFind(Node* head){

    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

Node* merge(Node* left, Node* right){

    Node dummy(0);
    Node* temp=&dummy;

    while(left!=NULL && right!=NULL){

        if(left->data < right->data){
            temp->next=left;
            left=left->next;
        }
        else{
            temp->next=right;
            right=right->next;
        }

        temp=temp->next;
    }

    if(left!=NULL)
        temp->next=left;
    else
        temp->next=right;

    return dummy.next;
}

Node* sortList(Node* head){

    if(head==NULL || head->next==NULL)
        return head;

    Node* mid=middleFind(head);

    Node* rtHead=mid->next;
    mid->next=NULL;

    Node* left=sortList(head);
    Node* right=sortList(rtHead);

    return merge(left,right);
}

int main(){

    return 0;
}