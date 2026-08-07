#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

bool isSumProperty(Node* root) {
    if (root == nullptr)
        return true;

    if (root->left == nullptr && root->right == nullptr)
        return true;

    int left = 0, right = 0;

    if (root->left)
        left = root->left->data;

    if (root->right)
        right = root->right->data;

    if (root->data != left + right)
        return false;

    return isSumProperty(root->left) && isSumProperty(root->right);
}


