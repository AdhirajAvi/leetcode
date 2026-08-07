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

int preindx=0;
unordered_map<int, int> inmpp;

treeNode* constructBt(vector<int>& preorder, int left, int right){

    if(left>right){
        return NULL;
    }

    treeNode* root=new treeNode(preorder[preindx]);
    int pos=inmpp[preorder[preindx]];
    preindx++;

    root->left=constructBt(preorder, left, pos-1);
    root->right=constructBt(preorder, pos+1, right);

    return root;
}

treeNode* inorderMarker(vector<int>& preorder, vector<int>& inorder){
    for(int i=0;i<inorder.size();i++){
        inmpp[inorder[i]]=i;
    }
    return constructBt(preorder, 0, inorder.size()-1);
}
