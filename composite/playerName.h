#ifndef PLAYERNAME_H
#define PLAYERNAME_H
#include "score.h"
#include <string>
using namespace std;

class playerName
{
    public:
        playerName(string n, score sc);
        void printScoreBoard();

    private:
        string name;
        score runsScored;
};

#endif // PLAYERNAME_H
