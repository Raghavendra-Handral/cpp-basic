#ifndef LIST_H
#define LIST_H
#include <iostream>
#include "Node.h"
using namespace std;

class list{
    //Node* head;
    public :
    Node* head;
    list() {head = NULL;}
    /**
     * @brief Inserts the new node at given position
     */
    void insertAtPos(int, int);
    /**
     * @brief Inserts the new node at end
     */
    void insertAtEnd(int);
    /**
     * @brief Displays the list 
     */
    void displayList();
    /**
     * @brief Deletes the a given node 
     */
    void deleteNode(int);
    /**
     * @brief Finds the length/size of linked list
     * 
     * @return int -- length of linked list
     */
    int findLen();
};

#endif // LIST_H