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

bool check(treeNode* root1, treeNode* root2){
    
    if(root1==NULL && root2==NULL){
        return true;
    }


    if (root1 == NULL || root2 == NULL){
        return false;
    }
    
    if(root1->val!=root2->val){
        return false;
    }
    
    return check(root1->left, root2->right) && check(root1->right, root2->left);
}

bool isSymmetric(treeNode* root) {
    return check(root, root);     
}