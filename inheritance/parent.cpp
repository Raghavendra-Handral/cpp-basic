#include <iostream>
#include "parent.h"
#include "child.h"
using namespace std;

/**
 * @brief 
 * 
 * @return parent 
 */
parent :: parent (){
    cout << "I am default parent constructor" << endl;
}

/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @return parent 
 */
parent :: parent (int a, int b){
    cout << "I am parent constructor" << endl;
    n1 = a;
    n2 = b;
}

/**
 * @brief 
 * 
 * @return parent 
 */
parent :: ~parent (){
    cout << "I am parent deconstructor" << endl;
}
/**
 * @brief 
 * 
 */
void parent :: printData(){
    cout << "The first value is " << n1 << endl;
    cout << "The second value is " << n2 << endl;
}
/**
 * @brief Set the Values object
 * 
 * @param a 
 * @param b 
 */
void parent :: setValues (int a, int b){
    cout << "setting values" << endl;
    n1 = a;
    n2 = b;
}