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

int leftHeight(TreeNode* root) {
    if (root == nullptr)
        return 0;

    return 1 + leftHeight(root->left);
}

int rightHeight(TreeNode* root) {
    if (root == nullptr)
        return 0;

    return 1 + rightHeight(root->right);
}

int countNodes(TreeNode* root) {
    if (root == nullptr)
        return 0;

    if (leftHeight(root) == rightHeight(root))
        return pow(2, leftHeight(root)) - 1;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);

    cout << "Total Nodes = " << countNodes(root);

    return 0;
}