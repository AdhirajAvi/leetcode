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

// bool validation(treeNode* &root, treeNode* &existingroot)
// {

//     if (root == NULL)
//     {
//         return true;
//     }

//     validation(root->left, existingroot);

//     if (existingroot!=NULL && root->val > existingroot->val)
//     {
//         return false;
//     }

//      existingroot=root;

//     validation(root->right, existingroot);

//     // if (root->val < existingroot->val)
//     // {
//     //     return false;
//     // }

//     // validation(root->right);
// }

// bool findvalidation(treeNode* root){
//     treeNode* existingroot=NULL;
//     return validation(root, existingroot);
// }


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
//         left = NULL;
//         right = NULL;
//     }
// };

// bool validation(treeNode *root, treeNode *&existingroot)
// {
//     if (root == NULL)
//     {
//         return true;
//     }

//     bool left = validation(root->left, existingroot);

//     if (left == false)
//     {
//         return false;
//     }

//     if (existingroot != NULL && root->val <= existingroot->val)
//     {
//         return false;
//     }

//     existingroot = root;

//     bool right = validation(root->right, existingroot);

//     if (right == false)
//     {
//         return false;
//     }

//     return true;
// }

// bool findvalidation(treeNode *root)
// {
//     treeNode *existingroot = NULL;
//     return validation(root, existingroot);
// }


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

bool validation(treeNode *root)
{
    stack<treeNode *> st;
    treeNode *existingroot = NULL;

    while (root != NULL || !st.empty())
    {
        while (root != NULL)
        {
            st.push(root);
            root = root->left;
        }

        root = st.top();
        st.pop();

        if (existingroot != NULL && root->val <= existingroot->val)
        {
            return false;
        }

        existingroot = root;

        root = root->right;
    }

    return true;
}