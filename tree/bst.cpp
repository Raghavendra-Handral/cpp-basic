/**
 * @file bst.cpp
 * @author Raghavendra-Handral (raghavendrahandral1998@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include "tree.h"
using namespace std;

int main(){
    tree t, *root = NULL;
    root = t.insertNode(root, 6);
    t.insertNode(root, 4);
    t.insertNode(root, 5);
    t.insertNode(root, 8);
    t.insertNode(root, 7);
    t.insertNode(root, 1);
    t.insertNode(root, 9);
    t.insertNode(root, 10);
    t.insertNode(root, 60);
    //cout << << endl;
    t.displayTree(root);
    cout << endl;
    cout << t.findHeight(root) << endl;
    cout << "The search element/data is " ;
    if(t.search(root, 15)) cout << "present" << endl;
    else cout << "not present" << endl;
    //cout << t.findMin(root) << endl;
    t.delNode(root, 10);
    t.displayTree(root);
    cout << endl;
    cout << t.findHeight(root) << endl;
    return 1;
}
