#include <iostream>
#include "parent.h"
#include "child.h"
using namespace std;

parent :: parent (){
    cout << "I am default parent constructor" << endl;
}

parent :: parent (int a, int b){
    cout << "I am parent constructor" << endl;
    n1 = a;
    n2 = b;
}

parent :: ~parent (){
    cout << "I am parent deconstructor" << endl;
}
void parent :: printData(){
    cout << "The first value is " << n1 << endl;
    cout << "The second value is " << n2 << endl;
}

void parent :: setValues (int a, int b){
    cout << "setting values" << endl;
    n1 = a;
    n2 = b;
}