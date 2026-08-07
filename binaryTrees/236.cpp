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

    treeNode *lca(treeNode *root, treeNode *p, treeNode *q)
    {

        // m1-start to end or start to back
        if (root == NULL)
        {
            return NULL;
        }

        if (root == p || root == q)
        {
            return root;
        }

        treeNode *left = lca(root->left, p, q);
        treeNode* right = lca(right->right, p, q);

        // m2-end to start or backtracking time
        if (left != NULL && right != NULL)
        {
            return root;
        }

        if (left != NULL)
        {
            return left;
        }

        else if (right != NULL)
        {
            return right;
        }

        else{return NULL;}
    }

    int main()
    {
        return 0;
    }