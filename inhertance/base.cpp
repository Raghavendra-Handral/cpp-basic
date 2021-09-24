#include <iostream>
#include "base.h"
using namespace std;

base :: base (){}

base :: base (int a){
    num = a;
}

base base :: operator+ (base ba){
    base baseNew;
    baseNew.num = num + ba.num;
    return (baseNew);
}

base base :: operator- (base ba){
    base baseNew;
    baseNew.num = num - ba.num;
    return (baseNew);
}

base base :: operator* (base ba){
    base baseNew;
    baseNew.num = num * ba.num;
    return (baseNew);
}

base base :: operator/ (base ba){
    base baseNew;
    if(ba.num == 0) throw ba.num;
    baseNew.num = num / ba.num;
    return (baseNew);
}