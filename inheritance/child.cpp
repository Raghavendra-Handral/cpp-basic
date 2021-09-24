#include <iostream>
#include "parent.h"
#include "child.h"
using namespace std;

child :: child (){
    cout << "I am child default constructor" << endl;
}


child :: child (int a, int b){
    n1 = a;
    n2 = b;
    cout << "I am child constructor" << endl;
    
}
 
child :: ~child (){
    cout << "I am child deconstructor" << endl;
}

void child :: printData(){
    cout << "In child, The first value is " << n1 << endl;
    cout << "In child, The second value is " << n2 << endl;
}