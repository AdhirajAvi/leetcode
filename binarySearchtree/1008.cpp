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

treeNode* bstFromPreorder(vector<int> &preorder)
{
    if (preorder.empty())
        return NULL;

    treeNode *root = new treeNode(preorder[0]);

    stack<treeNode *> st;
    st.push(root);

    for (int i = 1; i < preorder.size(); i++)
    {
        treeNode *node = new treeNode(preorder[i]);

        // Left child
        if (preorder[i] < st.top()->val)
        {
            st.top()->left = node;
        }
        // Right child
        else
        {
            treeNode *parent = NULL;

            while (!st.empty() && preorder[i] > st.top()->val)
            {
                parent = st.top();
                st.pop();
            }

            parent->right = node;
        }

        st.push(node);
    }

    return root;
}

// Inorder Traversal
void inorder(treeNode *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main()
{
    vector<int> preorder = {8, 5, 1, 7, 10, 12};

    treeNode *root = bstFromPreorder(preorder);

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}


// int i = 0;

// treeNode* build(vector<int> &preorder, int upperBound)
// {
//     if (i == preorder.size() || preorder[i] > upperBound)
//         return NULL;

//     treeNode *root = new treeNode(preorder[i++]);

//     root->left = build(preorder, root->val);
//     root->right = build(preorder, upperBound);

//     return root;
// }

// treeNode* bstFromPreorder(vector<int> &preorder)
// {
//     i = 0;   // Reset index before every call
//     return build(preorder, INT_MAX);
// }


