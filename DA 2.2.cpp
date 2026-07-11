#include "Die.h"
#include <cstdlib>

Die::Die()
{
    numberOfSides = 6;
    faceValue = 1;
}

Die::Die(int sides)
{
    numberOfSides = sides;
    faceValue = 1;
}

void Die::setNumberOfSides(int sides)
{
    numberOfSides = sides;
}

void Die::setFaceValue(int value)
{
    faceValue = value;
}

int Die::getNumberOfSides() const
{
    return numberOfSides;
}

int Die::getFaceValue() const
{
    return faceValue;
}

void Die::roll()
{
    faceValue = rand() % numberOfSides + 1;
}

string Die::describeDie() const
{
    return "Face Value: " + to_string(faceValue);
}