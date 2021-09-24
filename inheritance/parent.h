#ifndef PARENT_H
#define PARENT_H
using namespace std;

class parent
{
    protected:
    int n1, n2;

    public:
    parent();
    parent (int a, int b);
    void setValues(int, int);
    virtual void printData();
    ~parent();
        
};

#endif // PARENT_H