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

Node* convertArr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1;i<arr.size();i++){
        Node* newNode = new Node(arr[i]);
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}

int lengthLinklist(Node* head){

    if(head==NULL) return 0;

    Node* temp=head;
    int counter=0;
    while(temp!=NULL){
        counter+=1;
        temp=temp->next;
    }
    return counter;
}



Node* middleofLinklist(Node* head){

    if(head==NULL) return NULL;

    int counter=lengthLinklist(head);
    if(counter==1) return head;

    Node* temp=head;
    int counterCheck=1; 
    while(temp!=NULL){
        if(counterCheck==counter/2){
            break;
        }
        counterCheck+=1;
        temp=temp->next;
    }
    
   
    temp=temp->next;
    
    return temp;
}



void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

// int main(){
//     vector<int> arr = {1,2,5,2,1};
//     Node* head = convertArr2LL(arr);
//     head=middleofLinklist(head);
//     Node* j=printLL(head);

//     return 0;
// } 

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head=convertArr2LL(arr);
    head=middleofLinklist(head);
    printLL(head);

    return 0;
}

