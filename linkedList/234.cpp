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



bool palindromeLinklist(Node* head){

    if(head==NULL) return true;

    int counter=lengthLinklist(head);

    Node* temp=head;
    Node* N1;
    Node* prev=NULL;
    int counterCheck=1; 
    while(counterCheck<=counter/2){
        N1=temp->next;
        temp->next=prev;
        prev=temp;
        temp=N1;
        counterCheck+=1;
    }
    
    if(counter%2!=0){
        temp=temp->next;
    }
    Node* temp2=prev;
    while(temp!=NULL){
        if(temp2->data!=temp->data){
            return false;
        }
        temp=temp->next;
        temp2=temp2->next;
    }
    return true;
    }



void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

int main(){
    vector<int> arr = {1,2,5,2,1};
    Node* head = convertArr2LL(arr);
    bool m = palindromeLinklist(head);
    cout<<m<<endl;
    return 0;
} 