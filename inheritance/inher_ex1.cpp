#include <iostream>
#include "parent.h"
#include "child.h"
using namespace std;

int main(){
    //parent p1(15, 4);
    child c2;
    parent *p1 = &c2;
    p1 -> setValues(15, 4);
    c2.printData();
    child c1(10, 23);
    c1.printData();
}