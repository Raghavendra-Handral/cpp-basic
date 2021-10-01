#include <iostream>
#include "Node.h"
using namespace std;

Node :: Node(){
        data = 0;
        next = NULL;
}

Node :: Node(int d){
        this->data = d;
        this->next = NULL;        
} 