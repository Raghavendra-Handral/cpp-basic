#ifndef CHILD_H
#define CHILD_H
using namespace std;
#include "parent.h"

class child: public parent
{
    public:
        child ();
        child (int, int);
        void printData();
        ~child();
        
};

#endif // CHILD_H