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

Node* mergeSort(Node*& left, Node*& right){

    Node* dummy=new Node(-1);
    Node* temp=dummy;

    while(left!=nullptr && right!=nullptr){
    // while(left->next!=nullptr && right->next!=nullptr){
        if(left->data<=right->data){
            temp->next=left;
            left=left->next;
            // temp=temp->next;
        }
        else{
            temp->next=right;
            right=right->next;
            // temp=temp->next;
        }
        temp=temp->next;
    }

    if(left){
        temp->next=left;
    }
    else{
        temp->next=right;
    }

    return dummy->next;
}

Node* merge(vector<Node*>& lists, int low, int high){

    if(low>high){
        return nullptr;
    }

    // extra case!!!!!!!!
    if(low == high){
    return lists[low];
}

    int mid=low+(high-low)/2;
    // int mid=low+(low-high)/2;
    Node* left=merge(lists, low, mid);
    Node* right=merge(lists, mid+1, high);

    return mergeSort(left, right);
}

Node* caller(vector<Node*>& lists){

    if(lists.empty()){
        return nullptr;
    }
    
    int low=0;
    int high=lists.size()-1;
    return merge(lists, low, high);

}