#ifndef DIE_H
#define DIE_H

#include <string>
using namespace std;

class Die
{
private:
    const int numberOfSides;
    int faceValue;

public:
    Die(int sides = 6);

    int getNumberOfSides() const;
    int getFaceValue() const;

    void setFaceValue(int value);
    void roll();

    string describeDie() const;
};

#endif
