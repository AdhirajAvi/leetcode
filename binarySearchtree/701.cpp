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

treeNode* insert(treeNode* root, int val){

    if(root==NULL){

        // return NULL;
        // first time bdlna pda

        treeNode* node= new treeNode(val);
        return node;

    }

    if(val<root->val){
        root->left=insert(root->left, val);
        return root;   
    }
    else{
        root->right=insert(root->right, val);
        return root;
    }

}