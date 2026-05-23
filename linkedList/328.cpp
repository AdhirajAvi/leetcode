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

// Node* oddEvenlinked(Node* head){

//     Node* dummy=new Node(-1);
//     Node* current=dummy;

//     // return dummy->next;
//     Node* temp2=head;
//     int counter=1;

//     while(temp2!=NULL){

//         if(counter%2!=0){
//             current->next=new Node(temp2->data);
//             current=current->next;
//         }
//         counter+=1;
//         temp2=temp2->next;
//     }

//     Node* temp=head;
//     counter=1;

//     while(temp!=NULL){

//         if(counter%2==0){
//             current->next=new Node(temp->data);
//             current=current->next;
//         }
//         counter+=1;
//         temp=temp->next;
//     }
//     return dummy->next;
// }

Node* oddEvenlinked(Node* head){

    // return dummy->next;
    Node* temp2=head;
    Node* tail;
    int counter=1;

    while(temp2!=NULL){
        if(counter%2!=0){
            tail->next=temp2;
            tail=temp2;
        }
        counter+=1;
        temp2=temp2->next;
    }

    Node* temp=head;
    counter=1;
    
    while(temp!=NULL){
        if(counter%2==0){
            tail->next=temp;
            tail=temp;
        }
        counter+=1;
        temp=temp->next;
    }
}

int main(){
    return 0;
}