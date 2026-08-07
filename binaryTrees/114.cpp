// #include <bits/stdc++.h>
// using namespace std;

// struct treeNode{
//     int val;
//     treeNode* left;
//     treeNode* right;

//     treeNode(int x){
//         val=x;
//         left=nullptr;
//         right=nullptr;
//     }
// };

// void flatten(treeNode* root){

//     if(root==NULL){
//         return;
//     }

//     if(root->left){
//         flatten(root->left);
//     }

    
// }


#include <iostream>
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


// stack also can be implemented


void flatten(TreeNode* root)
{
    TreeNode* curr = root;

    while (curr != nullptr)
    {
        if (curr->left != nullptr)
        {
            // Find the rightmost node of the left subtree
            TreeNode* prev = curr->left;
            while (prev->right != nullptr)
            {
                prev = prev->right;
            }

            // Connect the original right subtree
            prev->right = curr->right;

            // Move the left subtree to the right
            curr->right = curr->left;
            curr->left = nullptr;
        }

        // Move to the next node
        curr = curr->right;
    }
}


void printFlattened(TreeNode* root) {
    while (root != nullptr) {
        cout << root->val << " ";
        root = root->right;
    }
    cout << endl;
}

int main() {
    //       1
    //      / \
    //     2   5
    //    / \   \
    //   3   4   6

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(6);

    flatten(root);

    cout << "Flattened Tree: ";
    printFlattened(root);

    return 0;
}

