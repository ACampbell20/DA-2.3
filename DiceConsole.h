#ifndef DICECONSOLE_H
#define DICECONSOLE_H

#include "Die.h"
#include <string>
using namespace std;

class DiceConsole
{
public:
    void displayDie(Die* die);
    void displayDice(Die* dice, int size);
    int getUserChoice(string menu);
};

#endif
