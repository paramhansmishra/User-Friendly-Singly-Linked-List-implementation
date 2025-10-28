#include <iostream>
#include "SLL.h"

int static toloop = 1;


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
        obj.AddAfter(value,after);
        break;
    case 4:
        cout<<"exiting...\n";
        toloop = 0;
    default:
        break;
    }
    return 0;
}

int main(){
    SLL l1;
    int in;
    while (toloop){
        cout<<"Things you can do :\n 1. AddNodeAtEnd(value)\t 2. traverse()\t 3. AddAfter(after, value)\t 4. Exit\n";
        cin>>in;
        todo(l1,in);
    }
}