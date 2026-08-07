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

int maxHeight(treeNode* root){
    
    if (root == NULL)
        return 0;

    return 1+max(maxHeight(root->left), maxHeight(root->right));
}

bool balancedBinarytree(treeNode* root){

    if (root == NULL){
        return true;
    }
    
    int left=maxHeight(root->left);
    int right=maxHeight(root->right);
    if(abs(left-right)>1){
        return false;
    }

    return balancedBinarytree(root->left) && balancedBinarytree(root->right);
}