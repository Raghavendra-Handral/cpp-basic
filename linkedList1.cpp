/**
 * @file linkedList1.c
 * @author Raghavendra-Handral (raghavendrahandral1998@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include "Node.h"
#include "list.h"
using namespace std;

int main(){
    list l;

    l.insertAtPos(2,1);
    l.insertAtPos(3,2);
    l.insertAtPos(8,3);
    l.insertAtEnd(1);
    l.insertAtEnd(7);
    l.insertAtPos(6,2);
    l.displayList();
    cout << endl;
    cout << "The length of list is " << l.findLen() << endl;

    l.insertAtEnd(9);
    l.insertAtPos(10,3);
    l.displayList();
    cout << endl;
    cout << "The length of list is " << l.findLen() << endl;

    l.deleteNode(3);
    l.displayList();
    cout << endl;
    cout << "The length of list is " << l.findLen() << endl;
    if(l.detectLoop()) cout << "Loop is detected " << endl;
    else cout << "Loop is not detected " << endl;
    l.deleteList();
    return 1;
}