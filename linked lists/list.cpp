#include <iostream>
#include "Node.h"
#include "list.h"
using namespace std;

// Function to insert node at given position
void list :: insertAtPos(int d, int n){
    Node* newNode = new Node(d); // Creates new node
    if(n == 1){
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for(int i = 0; i < n-2; i++){
        temp = temp->next;
    }   
    newNode->next = temp->next;
    temp->next = newNode;
    return;
}
// Function to insert node at end
void list :: insertAtEnd(int d){
    Node* newNode = new Node(d); // Creates new node
    if(head == NULL){
        //newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}
// Function to display the full list
void list :: displayList(){
    Node* temp = head;
    if(temp == NULL){ //Checking list for empty condition
        cout << "List is empty" << endl;
        return;
    }
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
}
// Function to delete at nth position
void list :: deleteNode(int n){
    Node* temp = head;
    for(int i = 0; i < n-2; i++){
        temp = temp->next;
    }
    Node* temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
    return;
}
// Function to find the size/length of linked list
int list :: findLen(){
    Node* temp = head;

    if(temp == NULL){ //Checking list for empty condition
        cout << "List is empty" << endl;
        return 0;
    }
    int i = 0;
    while(temp != NULL){
        i++;
        temp = temp->next;
    }
    return i;
}