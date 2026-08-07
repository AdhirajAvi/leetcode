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

int maxDepth(treeNode* node){
     if (node == nullptr)
        return 0;

    return 1+max(maxDepth(node->left),maxDepth(node->right));
}