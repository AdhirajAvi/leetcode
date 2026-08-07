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

vector<vector<int>> bfs(treeNode* root){
    vector<vector<int>> resul;
    queue<treeNode*> q;
    q.push(root);

    if (root == nullptr)
        return resul;

    while(!q.empty()){
        vector<int> level;
        int siz = q.size();
        // for(int i=0;i<q.size();i++){
        for(int i=0;i<siz;i++){

            treeNode* node=q.front();
            q.pop();
            level.push_back(node->val);

            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        resul.push_back(level);
    }
    return resul;
}

int main() {

    treeNode* root = new treeNode(3);
    root->left = new treeNode(9);
    root->right = new treeNode(20);
    root->right->left = new treeNode(15);
    root->right->right = new treeNode(7);

    vector<vector<int>> ans = bfs(root);

    for (auto level : ans) {
        for (int x : level) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}