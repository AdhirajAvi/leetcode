#include <bits/stdc++.h>
using namespace std;

class LRUCache {
public:

    struct Node {
        int key;
        int value;
        Node* prev;
        Node* next;

        Node(int k, int v) {
            key = k;
            value = v;
            prev = nullptr;
            next = nullptr;
        }
    };

    int capacity;

    unordered_map<int, Node*> mpp;
    // void insert(Node* node){
    //     Node* rightNode=head->next;  
    // }

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);

    // LRUCache(int &capacity)
    LRUCache(int capacity) {

        this->capacity = capacity;

        head->next = tail;
        tail->prev = head;
    }

    void insert(Node* node) {

        Node* rightNode = head->next;

        head->next = node;
        node->prev = head;

        node->next = rightNode;
        rightNode->prev = node;
    }

    void remove(Node* node) {

        // Node* leftNode=node->prev;

        // leftNode->next=tail;
        // tail->prev=leftNode;
        Node* leftNode = node->prev;
        Node* rightNode = node->next;

        leftNode->next = rightNode;
        rightNode->prev = leftNode;
    }

    int get(int key) {

        if(mpp.find(key) == mpp.end()) {
            return -1;
        }

        Node* node = mpp[key];

        remove(node);
        insert(node);

        return node->value;
    }

    void put(int key, int value) {

        if(mpp.find(key) != mpp.end()) {

            Node* node = mpp[key];

            node->value = value;

            remove(node);
            insert(node);

            return;
        }

        Node* newOne = new Node(key, value);

        mpp[key] = newOne;

        insert(newOne);

        if(mpp.size() > capacity) {

            Node* nodeToberemoved = tail->prev;

            remove(nodeToberemoved);

            mpp.erase(nodeToberemoved->key);
        }
    }
};


int main() {

    LRUCache lRUCache(2);
    lRUCache.put(1, 1);
    cout << "put(1,1)" << endl;
    lRUCache.put(2, 2);
    cout << "put(2,2)" << endl;
    cout << "get(1) = " << lRUCache.get(1) << endl;
    lRUCache.put(3, 3);
    cout << "put(3,3)" << endl;
    cout << "get(2) = " << lRUCache.get(2) << endl;
    lRUCache.put(4, 4);
    cout << "put(4,4)" << endl;
    cout << "get(1) = " << lRUCache.get(1) << endl;
    cout << "get(3) = " << lRUCache.get(3) << endl;
    cout << "get(4) = " << lRUCache.get(4) << endl;

    return 0;
}