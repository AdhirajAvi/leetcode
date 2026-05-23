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

    // NO NEED OF 2 ARG PUTTING 
    Node(int data1){
        data=data1;
        next=nullptr;
    } 
};

// DELETION OF HEAD
Node* deleteHead(Node* head){
    if(head == NULL) return NULL;

    Node* temp = head;
    head = head->next;

    delete temp;

    return head;
}

// DELETION OF TAIL
Node* deleteTail(Node* head){
    if(head == NULL || head->next==NULL) return NULL;

    Node* temp=head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next=nullptr;

    return head;
}

// CONVERT ARR TO LINKEDLIST
Node* arrToll(vector<int> &arr){

    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

// FOR LENGTH USE TRAVERSAL AND COUNTER

// INSERTION HEAD
Node* insertionHead(Node* head, int val){
    return new Node(val,head);
    // Node* temp->next=head;
    // head=temp;
}

// INSERTION TAIL
Node* insertTail(Node* head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        return newNode;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

int main(){
    vector<int> arr={12, 5, 8, 9};
    Node* head=arrToll(arr);
    cout<<head->data<<endl;

    return 0;
}