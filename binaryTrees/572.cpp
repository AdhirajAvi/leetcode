#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x), left(left), right(right) {}
};

bool symattric(TreeNode* root, TreeNode* subRoot) {

    if (root == nullptr && subRoot == nullptr) {
        return true;
    }

    if (root == nullptr || subRoot == nullptr) {
        return false;
    }

    if (root->val != subRoot->val) {
        return false;
    }

    return symattric(root->left, subRoot->left) &&
           symattric(root->right, subRoot->right);
}

bool isSubtree(TreeNode* root, TreeNode* subRoot) {

    if (root == nullptr) {
        return false;
    }

    if (root->val == subRoot->val) {

        bool ans = symattric(root, subRoot);

        if (ans == true) {
            return true;
        }
    }

    return isSubtree(root->left, subRoot) ||
           isSubtree(root->right, subRoot);
}

int main() {

    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(4);
    root->right = new TreeNode(5);

    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(2);


    TreeNode* subRoot = new TreeNode(4);

    subRoot->left = new TreeNode(1);
    subRoot->right = new TreeNode(2);


    bool ans = isSubtree(root, subRoot);

    if (ans) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}