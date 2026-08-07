// #include <bits/stdc++.h>
// using namespace std;

// struct treeNode {
//     int val;
//     treeNode* left;
//     treeNode* right;

//     treeNode(int x) {
//         val = x;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// bool target(treeNode* root, int k){

//     unordered_set<int> mpp;
//     markMpp(root, mpp);

//     for(int i=0; i<mpp.size(); i++){

    
//     if(k-mpp[i]){
//         return true;
//     }}

//     return false;
// }


#include <bits/stdc++.h>
using namespace std;

struct treeNode {
    int val;
    treeNode* left;
    treeNode* right;

    treeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(treeNode* root, vector<int>& ans) {
    if (root == nullptr)
        return;

    inorder(root->left, ans);
    ans.push_back(root->val);
    inorder(root->right, ans);
}

bool target(treeNode* root, int k) {
    vector<int> ans;
    inorder(root, ans);

    int i = 0;
    int j = ans.size() - 1;

    while (i < j) {
        int sum = ans[i] + ans[j];

        if (sum == k)
            return true;
        else if (sum < k)
            i++;
        else
            j--;
    }

    return false;
}