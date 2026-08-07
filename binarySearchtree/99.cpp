#include <bits/stdc++.h>
using namespace std;

struct treeNode
{
    int val;
    treeNode *left;
    treeNode *right;

    treeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

void recover(treeNode *root)
{
    stack<treeNode *> st;
    treeNode *prev = nullptr;

    treeNode *first = nullptr;
    treeNode *second = nullptr;

    while (root != NULL || !st.empty())
    {
        while (root != NULL)
        {
            st.push(root);
            root = root->left;
        }

        root = st.top();
        st.pop();

        if (prev != NULL && root->val < prev->val)
        {
            if (first == nullptr)
            {
                first = prev;
            }

            second = root;
        }

        prev = root;

        root = root->right;
    }

    swap(first->val, second->val);
}