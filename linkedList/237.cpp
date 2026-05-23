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
};

// DELETION OF NTH NODE
Node* deleteN(Node* head,int node){
    if(head == NULL || head->next==NULL) return NULL;
    if(node == 1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    Node* temp=head;
    Node* prev=NULL;
    int counter=0;

    // TRAVERSAL
    while(temp->next!=NULL){
        counter+=1;
        if(counter==node){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev = temp; 
        temp = temp->next;
        // prev =
    }
    return head;
}

// DELETION OF DATA NODE
Node* deleteN(Node* head,int node){
    if(head == NULL || head->next==NULL) return NULL;
    if(head->data == node){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    Node* temp=head;
    Node* prev=NULL;
    int d1=NULL;
    while(temp->next!=NULL){
        d1=temp->data;
        if(d1==node){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev = temp; 
        temp = temp->next;
        // prev =
    }
    return head;
}

// DELETION OF DATA NODE

// class Solution {
// public:
// void deleteNode(ListNode* node){
//         node->data=node->next->data;
//         Listnode* temp=node->next;
//         node->next=node->next->next;
//         delete temp;
//     }
// };


int main(){
    vector<int> arr = {4,5,1,9}; 
    // first convert linkedList to array to use or write each and every node for the linkedList
    Node* head=deleteN(head,2);
    // int node = 1;
    return 0;
}