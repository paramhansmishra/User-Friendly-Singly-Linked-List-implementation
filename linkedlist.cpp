#include <bits/stdc++.h>

using namespace std;
class Node{
public:
    int val;
    Node *next = NULL;

    Node(int &val){
        this->val = val;
        cout<<"Constructor 1 called\n";
    }
    Node(int &val, Node* ptr){
        this->val = val;
        this->next = ptr;
    }
};

class SLL {
public:
    Node *head = NULL;

    int AddNodeAtEnd(int &value){
        Node *newnode = new Node(value);
        if (head == NULL) head = newnode;
        else{
            Node *lastNode = head;
            while (lastNode->next != NULL)
            {
                lastNode = lastNode->next;
            }
            lastNode->next = newnode;
        }
        return 0;

    }
    int traverse(){
        Node *curr = head;
        while(curr != NULL){
            cout<<curr->val<<"->";
            curr = curr->next;
        }
        cout<<"NULL\n";
        return 0;
    }
    int AddAfter(int &after, int &value){
        // Sloppy work ik, but i am constantly learning even right now. 
        Node *curr = head;
        Node *newnode = new Node(value);
        if(curr == NULL) cout<<"SLL is Empty\n";
        else{
            while(curr!= NULL){
                if (curr->val == after){
                    Node *temp = curr->next;
                    curr->next = newnode;
                    newnode->next = temp;
                    break;
                }
                curr = curr->next;
            }
            if(curr == NULL){
                cout<<"After Element not present\n";
                return 0;
            }
        }
        return 0;
    }

    SLL(){
        // currently empty. some features to be added later. :)
    }
};

int todo(SLL &obj, int in){
    switch (in)
    {
    case 1:
        int val;
        cout<<"Enter Value :";
        cin>>val;
        obj.AddNodeAtEnd(val);
        break;
    case 2:
        obj.traverse();
        break;
    case 3:
        int value,after;
        cout<<"\nEnter After Element: ";
        cin>>after;
        cout<<"\nEnter Value: ";
        cin>>value;
        obj.AddAfter(after,value);
        break;
    default:
        break;
    }
}

int main(){
    SLL l1;
    int in;
    while (true){
        cout<<"Things you can do :\n 1. AddNodeAtEnd(value)\t 2. traverse()\t 3. AddAfter(after, value)\n";
        cin>>in;
        todo(l1,in);
    }
}