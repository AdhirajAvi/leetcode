#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

void preorder(TreeNode* node, vector<int>& result) {
    if (node == nullptr) return;

    result.push_back(node->val);
    preorder(node->left, result);
    preorder(node->right, result);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    vector<int> result;
    preorder(root, result);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}