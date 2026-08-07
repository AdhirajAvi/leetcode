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

vector<int> zigZag(treeNode *root){

    queue<treeNode *> q;
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }

    q.push(root);
    int level = 0;
    while (!q.empty())
    {
        int siz = q.size();
        vector<int> levels;
        for (int i = 0; i < siz; i++)
        {
            treeNode *x = q.front();
            q.pop();
            levels.push_back(x->val);

            if (x->left)
            {
                q.push(x->left);
            }
            if (x->right)
            {
                q.push(x->right);
            }
        }
        
        ans.push_back(levels[(levels.size()-1)]);
    }
    return ans;
}