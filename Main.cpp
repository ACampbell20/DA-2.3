#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Die.h"
#include "DiceHand.h"
#include "DiceConsole.h"

using namespace std;

int main()
{
    srand(time(0));

    DiceHand hand(2);

    hand.rollAllDice();

    DiceConsole console;

    int choice;

    do
    {
        cout << "\nCurrent Dice:\n";
        console.displayDice(hand.getDice(), hand.getSize());

        choice = console.getUserChoice(
            "\n1. Re-roll\n2. Stay"
        );

        if (choice == 1)
        {
            hand.rollAllDice();
        }

    } while (choice == 1);

    cout << "\nFinal Dice:\n";
    console.displayDice(hand.getDice(), hand.getSize());

    cout << "\nGoodbye!\n";

    return 0;
}
