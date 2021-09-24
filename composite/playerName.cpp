#include <iostream>
#include "score.h"
#include "playerName.h"
using namespace std;

playerName::playerName(string n, score sc)
: name(n), runsScored(sc)
{
}

void playerName::printScoreBoard()
{
    cout << name << " scored ";
    runsScored.printScore();
}
