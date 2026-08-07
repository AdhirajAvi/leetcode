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

// int postindx=&postorder()-1;
unordered_map<int, int> inmpp;

treeNode* constructBt(vector<int>& postorder, int left, int right, int &postindx){

    if(left>right){
        return NULL;
    }

    treeNode* root=new treeNode(postorder[postindx]);
    int pos=inmpp[postorder[postindx]];
    postindx--;

    root->right=constructBt(postorder, pos+1, right, postindx);
    root->left=constructBt(postorder, left, pos-1, postindx);
    // root->right=constructBt(postorder, pos+1, right);

    return root;
}

treeNode* inorderMarker(vector<int>& postorder, vector<int>& inorder){
    for(int i=0;i<inorder.size();i++){
        inmpp[inorder[i]]=i;
    }

    int postindx = postorder.size()-1;

    return constructBt(postorder, 0, inorder.size()-1, postindx);
}
