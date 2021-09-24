#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

// Write your Student class here
class Student{
    int m1, m2, m3, m4, m5;
    
    public:
    void input(){
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }
    int calculateTotalScore(){
        return (m1 + m2 + m3 + m4 + m5);
    }
};

int main() {
    int n; // number of students
    int end1;
    cout << "Enter the number of students" << endl;
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        cout << "Enter the marks of student " << i+1 << " of 5 subjects" << endl;
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count << " student/students scored more than first student" << endl;

    cout << "End the program by entering a integer" << endl;
    cin >> end1;
    
    return 0;
}
