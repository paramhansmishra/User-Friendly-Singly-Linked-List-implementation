#include "SLL.h"
#include <iostream>

SLL::SLL() : head(nullptr){}

int SLL::AddNodeAtEnd(int val){
    Node *newnode = new Node(val);
    if(head == nullptr)head = newnode;
    else{
        Node *lastnode = head;
        while (lastnode->next != nullptr){
            lastnode = lastnode->next;
        }
        lastnode->next = newnode;
    }
    return 0;
}

int SLL::AddAfter(int val, int after){
    Node *last = head;
    while(last!= nullptr&&last->val!=after){
        last=last->next;
    }
    if(last==nullptr){
        cout<<after<<" not present in the list\n";
        return 0;
    }
    Node *newnode = new Node(val);
    Node *temp = last->next;
    last->next = newnode;
    newnode->next = temp;
    return 0;
}

int SLL::traverse(){
    Node *last = head;
    int count = 0;
    while(last != nullptr){
        cout << last->val << "->";
        last = last->next;
        if(++count > 50) {  // safety, list should never have >50 nodes in your test
            cout << " LOOP DETECTED\n";
            break;
        }
    }
    cout<<"NULL\n";
    return 0;
}