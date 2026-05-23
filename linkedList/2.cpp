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

Node* addTwonumbers(Node* head1, Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
    int carry=0;
    Node* dummy=new Node(-1);
    Node* current=dummy;

    while(temp1!=NULL || temp2!=NULL || carry){

        if(temp1==NULL){
            temp1 = new Node(0,NULL);
        }
        if(temp2==NULL){
            temp2 = new Node(0,NULL);
        }

        int sum=0;
        sum=(temp1->data)+(temp2->data)+carry;
        int fullsum=+sum%10;

        carry=sum/10;
        // if(sum-9>0){
        //     carry+=1; 
        // }
        // else{
        //     carry=0;
        // }
        current->next=new Node(fullsum);
        current=current->next;

        temp1=temp1->next;
        temp2=temp2->next;
    }
    return dummy->next;
}

int main(){
    return 0;
}