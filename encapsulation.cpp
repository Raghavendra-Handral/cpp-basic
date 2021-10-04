/**
 * @file class_ex1.cpp
 * @author Raghavendra-Handral (raghavendrahandral1998@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <sstream>
#include "student.h"
using namespace std;

// main function
int main() {
    int age, standard;
    string fname, lname;
    
    cout << "Enter age of the student   ";
    cin >> age;
    cout << "Enter first name of the student   ";
    cin >> fname;
    cout << "Enter last name of the student   ";
    cin >> lname;
    cout << "Enter standard of the student   ";
    cin >> standard;
    
    Student st;
    st.setAge(age);
    st.setStandard(standard);
    st.setFirstName(fname);
    st.setLastName(lname);
    
    cout << st.getAge() << "\n";
    cout << st.getLastName() << ", " << st.getFirstName() << "\n";
    cout << st.getStandard() << "\n";
    cout << "\n";
    cout << st.toString();
    
    return 0;
}