#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include "base.h"
using namespace std;

int main(){
    base a(10);
    base b(0);
    base c;

    c = a + b;
    cout << c.num << endl;
    c = a - b;
    cout << c.num << endl;
    c = a * b;
    cout << c.num << endl;
    try{
        c = a / b;
        cout << c.num << endl;
    }

    catch(int e1){
        cout << "Exception: divide by zero" << endl;
    }
    catch(...){
        cout << "Other Exception" << endl;
    }
    
    

}