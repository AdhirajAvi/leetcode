// something is wrong!!!!!!!!
// #include <bits/stdc++.h>
// using namespace std;

// struct treeNode{
//     int val;
//     treeNode* left;
//     treeNode* right;

//     treeNode(int x){
//         val=x;
//         left=nullptr;
//         right=nullptr;
//     }
// };

// int maxHeight(treeNode* root){
    
//     if (root == NULL)
//         return 0;

//     return root->val+max(maxHeight(root->left), maxHeight(root->right)); 
// }

// int sum(treeNode* root){

//     if (root == NULL){
//         return 0;
//     }

//     int left=maxHeight(root->left);
//     int right=maxHeight(root->right);

//     // int maxi=0;
//     // maxi=max(maxi, (left+right));
//     // return maxi;
//     int currentDiameter=left+right+root->val;
//     return max(currentDiameter, max(sum(root->left),sum(root->right)));
// }


// know the right one too
// #include <bits/stdc++.h>
// using namespace std;

// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;

//     TreeNode(int x) {
//         val = x;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// int maxGain(TreeNode* root) {
//     if (root == nullptr)
//         return 0;

//     int left = maxGain(root->left);
//     int right = maxGain(root->right);

//     return root->val + max(0, max(left, right));
// }

// void traverse(TreeNode* root, int &maxSum) {
//     if (root == nullptr)
//         return;

//     int left = max(0, maxGain(root->left));
//     int right = max(0, maxGain(root->right));

//     maxSum = max(maxSum, left + right + root->val);

//     traverse(root->left, maxSum);
//     traverse(root->right, maxSum);
// }

// int maxPathSum(TreeNode* root) {
//     int maxSum = INT_MIN;
//     traverse(root, maxSum);
//     return maxSum;
// }

// int main() {
//     TreeNode* root = new TreeNode(1);
//     root->left = new TreeNode(2);
//     root->right = new TreeNode(3);

//     cout << maxPathSum(root);

//     return 0;
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

int dfs(treeNode *root, int &ans)
{
    if (root == NULL)
        return 0;

    int left = max(0, dfs(root->left, ans));
    int right = max(0, dfs(root->right, ans));

    ans = max(ans, left + right + root->val);

    return root->val + max(left, right);
}

int maxPathSum(treeNode *root)
{
    int ans = INT_MIN;
    dfs(root, ans);
    return ans;
}

int main()
{
    /*
            -10
           /   \
          9     20
               /  \
              15   7

    Maximum Path Sum = 15 + 20 + 7 = 42
    */

    treeNode *root = new treeNode(-10);
    root->left = new treeNode(9);
    root->right = new treeNode(20);
    root->right->left = new treeNode(15);
    root->right->right = new treeNode(7);

    cout << "Maximum Path Sum: " << maxPathSum(root);

    return 0;
}