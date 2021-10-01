#ifndef TREE_H
#define TREE_H
#include <iostream>
using namespace std;

class tree{
    //tree* head;
    int data;
    tree *left, *right;
    public :
    tree* root;
    tree(); // Default constructor
    tree(int); // Parameterised constructor
    /**
     * @brief Inserts the new node to binary search tree
     */
    tree* insertNode(tree*, int);
    /**
     * @brief Displays the binary search tree in INORDER traversal 
     */
    void displayTree(tree*);
    /**
     * @brief Finds the Height of binary search tree
     * 
     * @return int -- height of binary search tree
     */
    int findHeight(tree*);
    /**
     * @brief Searches wheather the node with the given value is present in binary search tree
     */
    bool search(tree*, int);
    /**
     * @brief Delete the node from the binary search tree
     */
    tree* delNode(tree*, int);
    /**
     * @brief Finds the node with the minimum value in the binary search tree
     * 
     * @return int -- Node with minimum value of binary search tree
     */
    tree* findMin(tree*);
};

#endif // TREE_H