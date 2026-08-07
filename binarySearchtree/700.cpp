#include <bits/stdc++.h>
using namespace std;

struct treeNode{
    int val;
    treeNode* left;
    treeNode* right;

    treeNode(int x){
        val=x;
        left=nullptr;
        right=nullptr;
    }
};

treeNode* search(treeNode* root, int val){

    if(root==NULL){
        return NULL;
    }

    if(root->val==val){
        return root;
    }

    if(val<root->val){
        treeNode* left=search(root->left, val);
        return left;
    }
    else{
        treeNode* right=search(root->right, val);
        return right;
    }

    // if(root->val==val){
    //     return root;
    // }
    
    // return root;
}