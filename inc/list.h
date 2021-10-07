/**
 * @file list.h
 * @author Raghavendra-Handral (raghavendrahandral1998@gmail.com)
 * @brief Header file
 * @version 0.1
 * @date 2021-09-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef LIST_H
#define LIST_H
#include <iostream>
#include "Node.h"
using namespace std;

class list{
    //Node* head;
    public :
    Node* head;
    list(){
    head = NULL;
}
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
     * @brief Deletes the node of given value/data 
     */
    void deleteNode(int);
    /**
     * @brief Finds the length/size of linked list
     * 
     * @return int -- length of linked list
     */
    int findLen();
    /**
     * @brief Checks the presence loop in linked list
     * 
     * @return bool -- True if the loop is detected, else false
     */
    bool detectLoop();
    /**
     * @brief Deletes the linked list and frees the memory
     *
     */
    void deleteList();
};

#endif // LIST_H