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

vector<int> postorder(treeNode* root) {
    vector<int> result;

    if (root == nullptr)
        return result;

    stack<treeNode*> st1, st2;
    st1.push(root);

    while (!st1.empty()) {
        treeNode* node = st1.top();
        st1.pop();

        st2.push(node);

        if (node->left)
            st1.push(node->left);

        if (node->right)
            st1.push(node->right);
    }

    while (!st2.empty()) {
        result.push_back(st2.top()->val);
        st2.pop();
    }

    return result;
}