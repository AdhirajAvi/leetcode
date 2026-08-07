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

treeNode* findMin(treeNode* root) {

    while (root->left != NULL) {
        root = root->left;
    }

    return root;
}

treeNode* deleteNode(treeNode* root, int key) {

    // Tree is empty
    if (root == NULL) {
        return NULL;
    }

    // Search in left subtree
    if (key < root->val) {
        root->left = deleteNode(root->left, key);
    }

    // Search in right subtree
    else if (key > root->val) {
        root->right = deleteNode(root->right, key);
    }

    // Found the node to delete
    else {

        // Case 1 & 2: No left child
        if (root->left == NULL) {
            return root->right;
        }

        // Case 2: No right child
        if (root->right == NULL) {
            return root->left;
        }

        // Case 3: Two children
        treeNode* successor = findMin(root->right);

        // Copy successor's value
        root->val = successor->val;

        // Delete duplicate successor
        root->right = deleteNode(root->right, successor->val);
    }

    // Return the (possibly updated) root
    return root;
}