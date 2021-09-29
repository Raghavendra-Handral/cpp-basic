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
    l.insertAtEnd(1);
    l.insertAtEnd(7);
    l.insertAtPos(6,4);
    
    l.displayList();
    cout << endl;

    l.insertAtEnd(9);
    l.insertAtPos(8,4);

    l.displayList();
    cout << endl;
    return 1;
    
}