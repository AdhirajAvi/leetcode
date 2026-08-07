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

// void preSuc(treeNode *root, int key, int &pre, int &suc)
// {
//     if (root == NULL)
//         return;

//     if (root->val == key)
//     {
//         // Predecessor = maximum in left subtree
//         if (root->left)
//         {
//             treeNode *temp = root->left;

//             while (temp->right)
//                 temp = temp->right;

//             pre = temp->val;
//         }

//         // Successor = minimum in right subtree
//         if (root->right)
//         {
//             treeNode *temp = root->right;

//             while (temp->left)
//                 temp = temp->left;

//             suc = temp->val;
//         }

//         return;
//     }

//     else if (key < root->val)
//     {
//         suc = root->val;
//         preSuc(root->left, key, pre, suc);
//         return;
//     }

//     else
//     {
//         pre = root->val;
//         preSuc(root->right, key, pre, suc);
//         return;
//     }
// }

// vector<int> predecessorSuccessor(treeNode *root, int key)
// {
//     int pre = -1;
//     int suc = -1;

//     preSuc(root, key, pre, suc);

//     vector<int> ans;
//     ans.push_back(pre);
//     ans.push_back(suc);

//     return ans;
// }


void preSuc(treeNode *root, int key, int &pre, int &suc)
{
    while (root)
    {
        if (root->val == key)
        {
            // Find predecessor
            if (root->left)
            {
                treeNode *temp = root->left;

                while (temp->right)
                    temp = temp->right;

                pre = temp->val;
            }

            // Find successor
            if (root->right)
            {
                treeNode *temp = root->right;

                while (temp->left)
                    temp = temp->left;

                suc = temp->val;
            }

            return;
        }

        else if (key < root->val)
        {
            suc = root->val;
            root = root->left;
        }

        else
        {
            pre = root->val;
            root = root->right;
        }
    }
}

vector<int> predecessorSuccessor(treeNode *root, int key)
{
    int pre = -1;
    int suc = -1;

    preSuc(root, key, pre, suc);

    vector<int> ans;
    ans.push_back(pre);
    ans.push_back(suc);

    return ans;
}


// void preSuc(treeNode *root, int key, int &pre, int &suc)
// {
//     stack<treeNode *> st;
//     treeNode *curr = root;
//     treeNode *prev = NULL;

//     while (curr != NULL || !st.empty())
//     {
//         while (curr != NULL)
//         {
//             st.push(curr);
//             curr = curr->left;
//         }

//         curr = st.top();
//         st.pop();

//         if (curr->val == key)
//         {
//             // Predecessor
//             if (prev)
//                 pre = prev->val;

//             // Successor
//             if (curr->right)
//             {
//                 treeNode *temp = curr->right;

//                 while (temp->left)
//                     temp = temp->left;

//                 suc = temp->val;
//             }
//             else if (!st.empty())
//             {
//                 suc = st.top()->val;
//             }

//             return;
//         }

//         prev = curr;
//         curr = curr->right;
//     }
// }

// vector<int> predecessorSuccessor(treeNode *root, int key)
// {
//     int pre = -1;
//     int suc = -1;

//     preSuc(root, key, pre, suc);

//     vector<int> ans;
//     ans.push_back(pre);
//     ans.push_back(suc);

//     return ans;
// }