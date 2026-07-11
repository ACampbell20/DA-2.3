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
    DiceHand();
    DiceHand(int handSize);

    ~DiceHand();

    int getSize() const;

    void rollAllDice();
    void rollDie(int dieNum);

    string displayDieHand() const;
};

#endif