#include <iostream>
#include <sstream>
#include "student.h"
using namespace std;

// Class functions definition
string Student::toString(){
    stringstream combined;
    combined << firstName << " " << lastName << " of " << ageOfStudent << " years is studying in class " << standardOfStudent ;
    return combined.str();
}