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

void postorder(TreeNode* node, vector<int>& result) {
    if (node == nullptr)
        return;

    postorder(node->left, result);   // Left
    postorder(node->right, result);  // Right
    result.push_back(node->val);     // Root
}

int main() {

    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    vector<int> result;
    postorder(root, result);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}