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
        left = nullptr;
        right = nullptr;
    }
};


class BSTIterator
{
public:
    stack<treeNode *> st;

    BSTIterator(treeNode *root)
    {
        pushAll(root);
    }

    void pushAll(treeNode *node)
    {
        while (node)
        {
            st.push(node);
            node = node->left;
        }
    }

    int next()
    {
        treeNode *node = st.top();
        st.pop();

        pushAll(node->right);

        return node->val;
    }

    bool hasNext()
    {
        return !st.empty();
    }
};


// class BSTIterator
// {
// public:
//     vector<int> inorder;
//     int idx = 0;

//     void dfs(treeNode *root)
//     {
//         if (root == NULL)
//             return;

//         dfs(root->left);
//         inorder.push_back(root->val);
//         dfs(root->right);
//     }

//     BSTIterator(treeNode *root)
//     {
//         dfs(root);
//     }

//     int next()
//     {
//         return inorder[idx++];
//     }

//     bool hasNext()
//     {
//         return idx < inorder.size();
//     }
// };


int main()
{
    treeNode *root = new treeNode(7);
    root->left = new treeNode(3);
    root->right = new treeNode(15);
    root->right->left = new treeNode(9);
    root->right->right = new treeNode(20);

    BSTIterator it(root);

    while (it.hasNext())
    {
        cout << it.next() << " ";
    }

    return 0;
}