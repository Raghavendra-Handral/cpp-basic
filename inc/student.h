#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student{
    int ageOfStudent, standardOfStudent;
    string firstName, lastName;
    
    public:
        //setting private variables
        void setAge(int a){
            ageOfStudent = a;
        }
        void setStandard(int s){
            standardOfStudent = s;
        }
        void setFirstName(string fn){
            firstName = fn;
        }
        void setLastName(string ln){
            lastName = ln;
        }
        //reading private variables
        int getAge(){
            return ageOfStudent;
        }
        int getStandard(){
            return standardOfStudent;
        }
        string getFirstName(){
            return firstName;
        }
        string getLastName(){
            return lastName;
        }
        string toString();
};


#endif // STUDENT_H