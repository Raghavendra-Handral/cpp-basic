#include <iostream>
#include "score.h"
using namespace std;

score::score(int s)
{
    playerScore = s;
}

void score::printScore(){
    cout << playerScore << " runs" << endl;
}
