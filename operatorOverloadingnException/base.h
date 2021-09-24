#ifndef BASE_H
#define BASE_H
using namespace std;

class base
{
    public:
        int num;
        base ();
        base (int);
        base operator+ (base);
        base operator- (base);
        base operator* (base);
        base operator/ (base);
};

#endif // BASE_H