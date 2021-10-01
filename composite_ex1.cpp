#include <iostream>
#include "playerName.h"
#include "score.h"
using namespace std;

int main(){

    int r1, end1;
    cin >> r1;
    score scoreObj(r1);

    playerName pnObj("Rahul Dravid", scoreObj);
    pnObj.printScoreBoard();
    
    score scoreObj2(109);

    playerName pnObj2("Virat Kohli", scoreObj2);
    pnObj2.printScoreBoard();

    cout << "End the program by entering a integer" << endl;
    cin >> end1;
    return 0;
}
