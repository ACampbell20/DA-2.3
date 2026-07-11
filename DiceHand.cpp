#include "DiceHand.h"
#include <string>

using namespace std;

DiceHand::DiceHand(int handSize)
    : DiceHand(new Die[handSize], handSize)
{
}

DiceHand::DiceHand(Die* diceArray, int handSize)
{
    dice = diceArray;
    size = handSize;
}


DiceHand::~DiceHand()
{
    delete[] dice;
}


int DiceHand::getSize() const
{
    return size;
}


Die* DiceHand::getDice() const
{
    return dice;
}


void DiceHand::rollDie(int dieNum)
{
    if (dieNum >= 0 && dieNum < size)
    {
        dice[dieNum].roll();
    }
}
void DiceHand::rollAllDice()
{
    for (int i = 0; i < size; i++)
    {
        dice[i].roll();
    }
}


string DiceHand::displayDieHand() const
{
    string result = "";

    for (int i = 0; i < size; i++)
    {
        result += "Die ";
        result += to_string(i + 1);
        result += ": ";
        result += to_string(dice[i].getFaceValue());
        result += "\n";
    }

    return result;
}
