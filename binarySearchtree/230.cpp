// ye pura glt he

// #include <bits/stdc++.h>
// using namespace std;

// struct treeNode
// {
//     int val;
//     treeNode *left;
//     treeNode *right;

//     treeNode(int x)
//     {
//         val = x;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// int kthSmall(treeNode *&root, int &val, int &counter)
// {

//     if (root == NULL)
//     {
//         return 0;
//     }

//     // if (val<root->val)
//     // {
//     int x = kthSmall(root->left, val, counter);
//     // counter++;
//     // }

//     // this line changed, rest your logic right
//     if (x != 0)
//         return x;

//     // else{
//     x = kthSmall(root->right, val, counter);
//     if (x != 0)
//         return x;
//     // }

//     int ans = 0;

//     if (counter == val)
//     {
//         ans = root->val;
//     }
//     // else if(ans){
//     //     return ans;
//     // }
//     else
//     {
//         counter++;
//         // return NULL;
//     }
//     return ans;
// }

// int callKth(treeNode *root, int val)
// {
//     int counter = 1;
//     return kthSmall(root, val, counter);
// }


#include <iostream>
#include <stack>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

int kthSmallest(TreeNode *root, int k)
{
    stack<TreeNode *> st;

    while (root != NULL || !st.empty())
    {

        while (root != NULL)
        {
            st.push(root);
            root = root->left;
        }

        root = st.top();
        st.pop();

        k--;

        if (k == 0)
            return root->val;

        root = root->right;
    }

    return -1;
}

int main()
{
    TreeNode *root = new TreeNode(5);

    root->left = new TreeNode(3);
    root->right = new TreeNode(7);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(8);

    int k = 5;

    cout << kthSmallest(root, k);

    return 0;
}
