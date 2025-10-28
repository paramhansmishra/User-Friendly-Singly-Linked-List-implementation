#include "node.h"
#ifndef SLL_H
#define SLL_H
class SLL{

    public:
    Node *head;
        SLL();
        int AddNodeAtEnd(int value);
        int traverse();
        int AddAfter(int value, int after);
        
};
#endif