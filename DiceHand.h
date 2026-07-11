#ifndef DICEHAND_H
#define DICEHAND_H

#include "Die.h"
#include <string>
using namespace std;

class DiceHand
{
private:
    Die* dice;
    int size;

public:
    DiceHand(int handSize = 5);
    DiceHand(Die* diceArray, int handSize);

    ~DiceHand();

    int getSize() const;
    Die* getDice() const;

    void rollDie(int dieNum);
    void rollAllDice();

    string displayDieHand() const;
};

#endif
