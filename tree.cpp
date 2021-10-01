#include <iostream>
#include "tree.h"
using namespace std;

tree :: tree()
:data(0), left(NULL), right(NULL)
{      
}

tree :: tree(int d)
:data(d), left(NULL), right(NULL)
{      
} 
// Function to insert the tree in tree
tree* tree :: insertNode(tree* root, int d){
    tree* newtree = new tree(d);
    if(root == NULL){ // checking tree empty condition
        root = newtree;
        return root;
    }
    if(d <= root->data ){
        root->left = insertNode(root->left, d);
    }
    else if(d > root->data ){
        root->right = insertNode(root->right, d);
    }
    return root;
}
// Function to display the data in tree
void tree :: displayTree(tree* root){
    if(root == NULL){ // checking tree empty condition
        //cout << "Tree is empty" << endl;
        return;
    }
    displayTree(root->left);
    cout << root->data << " ";
    displayTree(root->right);
    return;
        
}
// function to search wheather the data find in the tree
bool tree :: search(tree* root, int n){
    if(root == NULL){ // checking tree empty condition
        return false;
    }
    else if (root->data == n) return true;
    else if (n < root->data) return search(root->left, n);
    else return search(root->right, n);        
}
// Function to delete a node from tree

tree* tree :: delNode(tree* root, int n){
    if(root == NULL){ // checking tree empty condition
        return root;
    }
    else if (n < root->data) {
        root->left = delNode(root->left, n);
    }
    else if (n > root->data){
        root->right = delNode(root->right, n);
    } 
    else {  // found the target node
        if(root->left == NULL && root->right == NULL){   //case 1 - target node has no child
        delete root;
        root = NULL;
        }
        else if(root->left == NULL){
            tree* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->left == NULL){
            tree* temp = root;
            root = root->left;
            delete temp;
        }
        else{
            tree* temp = findMin(root->right);
            root->data = temp->data;
            root->right = delNode(root->right, temp->data);

        }
    }
    return root;
}

// Function to find the height of binary tree
int tree :: findHeight(tree* root){
    if(root == NULL){ // checking tree empty condition
        return -1;
    }
    return max(findHeight(root->left), findHeight(root->right)) + 1;
        
}
// Function to find node with minimum value
tree* tree :: findMin(tree* root){
    while(root->left != NULL){
        root=root->left;
    }
    return root;
}