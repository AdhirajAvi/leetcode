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

void floorCeil(treeNode* root, int key, int &mini, int &maxi){

    if(root==NULL){
        return;
    }

    if(key==root->val){
        maxi=root->val;
        mini=root->val;
        return;
    }

    else if(key<root->val){
        maxi=root->val;
        floorCeil(root->left, key, mini, maxi);
        return;
    }
    
    else{
        mini=root->val;
        floorCeil(root->right, key, mini, maxi);
        return;
    }
}

vector<int> floorCeilofbst(treeNode* root,int key){

    int mini=-1;
    int maxi=-1;

    floorCeil(root, key, mini, maxi);

    vector<int> ans;
    ans.push_back(mini);
    ans.push_back(maxi);

    return ans;
}