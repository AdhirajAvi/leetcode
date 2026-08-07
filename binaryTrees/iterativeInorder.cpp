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

vector<int> inorder(treeNode* root){
    vector<int> resul;
    stack<treeNode*> st;
    treeNode* node = root;

    while(node!=nullptr || !st.empty()){
        
        while(node!=nullptr){
            st.push(node);
            node=node->left;
        }
        node=st.top();
        st.pop();
        resul.push_back(node->val);
        node=node->right;
    }
    return resul;
}

int main() {
    // Create tree:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5

    treeNode* root = new treeNode(1);
    root->left = new treeNode(2);
    root->right = new treeNode(3);
    root->left->left = new treeNode(4);
    root->left->right = new treeNode(5);

    vector<int> ans = inorder(root);

    cout << "Inorder Traversal: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}