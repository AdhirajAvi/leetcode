#include <bits/stdc++.h>
using namespace std;

struct treeNode {
    int val;
    treeNode* left;
    treeNode* right;

    treeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

int widthOfBinaryTree(treeNode* root) {

    if (root == nullptr)
        return 0;

    long long ans = 0;

    queue<pair<treeNode*, long long>> q;
    q.push({root, 0});

    while (!q.empty()) {

        int size = q.size();

        long long mini = q.front().second;
        long long first = 0, last = 0;

        for (int i = 0; i < size; i++) {

            treeNode* node = q.front().first;
            long long idx = q.front().second - mini;
            q.pop();

            if (i == 0)
                first = idx;

            if (i == size - 1)
                last = idx;

            if (node->left)
                q.push({node->left, 2 * idx + 1});

            if (node->right)
                q.push({node->right, 2 * idx + 2});
        }

        ans = max(ans, last - first + 1);
    }

    return ans;
}

int main() {

    /*
              1
           /     \
          3       2
         /         \
        5           9
       /           /
      6           7
    */

    treeNode* root = new treeNode(1);

    root->left = new treeNode(3);
    root->right = new treeNode(2);

    root->left->left = new treeNode(5);
    root->right->right = new treeNode(9);

    root->left->left->left = new treeNode(6);
    root->right->right->left = new treeNode(7);

    cout << "Maximum Width = " << widthOfBinaryTree(root);

    return 0;
}