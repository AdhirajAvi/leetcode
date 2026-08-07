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

void allTraversals(treeNode* root) {
    vector<int> pre, in, post;

    if (root == nullptr)
        return;

    stack<pair<treeNode*, int>> st;
    st.push({root, 1});

    while (!st.empty()) {
        auto &it = st.top();

        // Preorder
        if (it.second == 1) {
            pre.push_back(it.first->val);
            it.second++;

            if (it.first->left)
                st.push({it.first->left, 1});
        }

        // Inorder
        else if (it.second == 2) {
            in.push_back(it.first->val);
            it.second++;

            if (it.first->right)
                st.push({it.first->right, 1});
        }

        // Postorder
        else {
            post.push_back(it.first->val);
            st.pop();
        }
    }

    cout << "Preorder: ";
    for (int x : pre)
        cout << x << " ";

    cout << "\nInorder: ";
    for (int x : in)
        cout << x << " ";

    cout << "\nPostorder: ";
    for (int x : post)
        cout << x << " ";

    cout << endl;
}

int main() {
    // Tree:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5

    treeNode* root = new treeNode(1);
    root->left = new treeNode(2);
    root->right = new treeNode(3);
    root->left->left = new treeNode(4);
    root->left->right = new treeNode(5);

    allTraversals(root);

    return 0;
}