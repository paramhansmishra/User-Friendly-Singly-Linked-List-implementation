#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next = nullptr;

    Node(int val) {         // pass-by-value
        this->val = val;
        cout << "Constructor 1 called\n";
    }

    Node(int val, Node* ptr) {
        this->val = val;
        this->next = ptr;
    }
};
#endif