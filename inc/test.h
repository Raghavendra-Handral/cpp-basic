#ifndef TEST_H
#define TEST_H
#include <iostream>
using namespace std;

class test{
    int max, min, avg;
    void findMaxMinAvg(int*, int, int&, int&, int&);
public:
    test(int*, int);
};

#endif // TEST_H