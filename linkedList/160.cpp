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

// Node* convertArr2LL(vector<int> arr){
//     Node* head = new Node(arr[0]);
//     Node* temp = head;
//     for(int i=1;i<arr.size();i++){
//         Node* newNode = new Node(arr[i]);
//         temp->next = newNode;
//         temp = newNode;
//     }
//     return head;
// }



Node *getIntersectionnode(Node *headA, Node *headB) {

    Node* temp1 = headA;
    Node* temp2 = headB;

    while(temp1 != temp2){
        if(temp1 == NULL){
            temp1 = headB;
        }
        else{
            temp1 = temp1->next;
        }
        if(temp2 == NULL){
            temp2 = headA;
        }
        else{
            temp2 = temp2->next;
        }
    }
    return temp1;
};



// void printLL(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout << temp->data << " ";
//         temp=temp->next;
//     }
//     cout << endl;
// }

int main(){
    return 0;
} 