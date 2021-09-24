#include <iostream>
#include <sstream>
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

// Class functions definition
string Student::toString(){
    stringstream combined;
    combined << ageOfStudent << "," << firstName << "," << lastName << "," << standardOfStudent ;
    return combined.str();
}

// main function
int main() {
    int age, standard;
    string fname, lname;
    
    cout << "Enter age of the student   ";
    cin >> age;
    cout << "Enter first name of the student   ";
    cin >> fname;
    cout << "Enter last name of the student   ";
    cin >> lname;
    cout << "Enter standard of the student   ";
    cin >> standard;
    
    Student st;
    st.setAge(age);
    st.setStandard(standard);
    st.setFirstName(fname);
    st.setLastName(lname);
    
    cout << st.getAge() << "\n";
    cout << st.getLastName() << ", " << st.getFirstName() << "\n";
    cout << st.getStandard() << "\n";
    cout << "\n";
    cout << st.toString();
    
    return 0;
}