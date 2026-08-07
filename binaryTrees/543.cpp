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

int diameter(treeNode* root){

    if (root == NULL){
        return 0;
    }

    int left=maxHeight(root->left);
    int right=maxHeight(root->right);

    // int maxi=0;
    // maxi=max(maxi, (left+right));
    // return maxi;
    int currentDiameter=left+right;
    return max(currentDiameter, max(diameter(root->left), diameter(root->right)));
}