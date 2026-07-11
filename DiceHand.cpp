#include "DiceHand.h"

DiceHand::DiceHand()
{
    size = 5;
    dice = new Die[size];
}

DiceHand::DiceHand(int handSize)
{
    size = handSize;
    dice = new Die[size];
}

DiceHand::~DiceHand()
{
    delete[] dice;
}

int DiceHand::getSize() const
{
    return size;
}

void DiceHand::rollAllDice()
{
    for (int i = 0; i < size; i++)
        dice[i].roll();
}

void DiceHand::rollDie(int dieNum)
{
    if (dieNum >= 0 && dieNum < size)
        dice[dieNum].roll();
}

string DiceHand::displayDieHand() const
{
    string output = "";

    for (int i = 0; i < size; i++)
    {
        output += "Die ";
        output += to_string(i + 1);
        output += ": ";
        output += to_string(dice[i].getFaceValue());
        output += "\n";
    }

    return output;
}