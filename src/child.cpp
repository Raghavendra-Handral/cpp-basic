#include <iostream>
#include "parent.h"
#include "child.h"
using namespace std;
/**
 * @brief 
 * 
 * @return child 
 */
child :: child (){
    cout << "I am child default constructor" << endl;
}

/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @return child 
 */
child :: child (int a, int b){
    n1 = a;
    n2 = b;
    cout << "I am child constructor" << endl;
    
}
/**
 * @brief 
 * 
 * @return child 
 */
child :: ~child (){
    cout << "I am child deconstructor" << endl;
}
/**
 * @brief 
 * 
 */
void child :: printData(){
    cout << "In child, The first value is " << n1 << endl;
    cout << "In child, The second value is " << n2 << endl;
}