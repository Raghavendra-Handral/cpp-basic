#ifndef CHILD_H
#define CHILD_H
using namespace std;
#include "parent.h"

class child: public parent
{
    public:
    /**
     * @brief Construct a new child object
     * 
     */
    child ();
    /**
     * @brief Construct a new child object
     * 
     */
    child (int, int);
    /**
     * @brief 
     * 
     */
    void printData();
    /**
     * @brief Destroy the child object
     * 
     */
    ~child();
        
};

#endif // CHILD_H