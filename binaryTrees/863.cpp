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

void parentMarker(treeNode* &root,unordered_map<treeNode*, treeNode*> &parent){
   
    queue<treeNode*> q;
    q.push(root);

    while(!q.empty()){
        // int siz=q.size();
        // for(int i=0; i<siz; i++){
            treeNode* newNode=q.front();
            q.pop();

            if(newNode->left){
            parent[newNode->left]=newNode;
            q.push(newNode->left);
            }

            if(newNode->right){
                parent[newNode->right]=newNode;
                q.push(newNode->right);
            
            }
        // }
    }
}

vector<int> distanceK(treeNode* root, treeNode* target, int k){

    queue<treeNode*> q;
    q.push(target);
    unordered_map<treeNode*,bool> visited;
    unordered_map<treeNode*, treeNode*> parent;
    parentMarker(root, parent);
    visited[target]=true;

    int level=0;

    while(!q.empty()){
        int siz=q.size();
        if(level==k){
            break;
        }
        level++;
        for(int i=0;i<siz;i++){
        treeNode* node=q.front();
        q.pop();

        if(node->left && !visited[node->left]){
            visited[node->left]=true;
            q.push(node->left);
        }

        if(node->right && !visited[node->right]){
            visited[node->right]=true;
            q.push(node->right);
        }

        if(parent[node] && !visited[parent[node]]){
            visited[parent[node]]=true;
            q.push(parent[node]);
        }


    }
}
vector<int> ans;
while(!q.empty()){
    ans.push_back(q.front()->val);
    q.pop();

}
return ans;

}