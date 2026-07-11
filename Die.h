#ifndef DIE_H
#define DIE_H

#include <string>
using namespace std;

class Die
{
private:
    int numberOfSides;
    int faceValue;

public:
    Die();
    Die(int sides);

    void setNumberOfSides(int sides);
    void setFaceValue(int value);

    int getNumberOfSides() const;
    int getFaceValue() const;

    void roll();

    string describeDie() const;
};

#endif