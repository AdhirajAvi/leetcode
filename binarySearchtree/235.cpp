#include <bits/stdc++.h>
using namespace std;


struct treeNode{
    int val;
    treeNode* left;
    treeNode* right;

    treeNode(int x){
        val=x;
        left=nullptr;
        right=nullptr;
    }
};


// treeNode* lca(treeNode* root, treeNode* p, treeNode* q)
// {
//     while (root)
//     {
//         if (p->val < root->val && q->val < root->val)
//             root = root->left;

//         else if (p->val > root->val && q->val > root->val)
//             root = root->right;

//         else
//             return root;
//     }

//     return NULL;
// }


treeNode* lca(treeNode* root, treeNode* p, treeNode* q)
{
    if (root == NULL)
        return NULL;

    if (p->val < root->val && q->val < root->val)
        return lca(root->left, p, q);

    if (p->val > root->val && q->val > root->val)
        return lca(root->right, p, q);

    return root;
}