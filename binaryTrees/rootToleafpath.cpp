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

// vector<vector<int>> rootToleafpath(treeNode* root){
void rootToleafpath(treeNode* root,
            vector<int>& ans,
            vector<vector<int>>& ans2){

    // vector<int> ans;
    // vector<vector<int>> ans2;
    if(root==NULL){
        // ans2.push_back(ans);
        // ans.pop_back();
        return;
    }

    ans.push_back(root->val);
    if(root->left == nullptr && root->right == nullptr){
        ans2.push_back(ans);
    }
    rootToleafpath(root->left, ans, ans2);
    // ans.pop_back();
    rootToleafpath(root->right, ans, ans2);

    ans.pop_back();
}

vector<vector<int>> rootToleafpathans(treeNode* root){

    vector<int> ans;
    vector<vector<int>> ans2;

    rootToleafpath(root, ans, ans2);

    return ans2;
}