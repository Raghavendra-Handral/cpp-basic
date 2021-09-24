#include <iostream>
using namespace std;

// Base class
class baseClass{
    public:
    baseClass(){}
    virtual void print(){
        cout << "I am base class" << endl;
    }
};

class childClass1: public baseClass {
    public:
    childClass1(){}
    void print(){
        cout << "I am child class 1" << endl;
        }
};

class childClass2: public baseClass {
    public:
    childClass2(){}
    void print(){
        cout << "I am child class 2" << endl;
        }
};

int main(){
    int end1=0;
    childClass1 cc1;
    cc1.print();
    childClass2 cc2;
    cc2.print();

    cout << "End the program by entering a integer" << endl;
    cin >> end1;
    return 0;
}