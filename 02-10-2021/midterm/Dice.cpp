#include "Dice.h"

Dice::Dice(int rolls, int sides)
{
    _numSides = sides;
    _latestRoll.resize(rolls);
}

void Dice::setSeed(int seed)
{
    srand(seed);
}

/* Gets random values for all dice and stores them in _latestRoll
    */
void Dice::rollDice()
{
    (*this)._numSides;
    this->_numSides;

    for (unsigned i = 0; i < _latestRoll.size(); i++)
    {
        _latestRoll.at(i) = randInt(1, _numSides);
    }
}

/* Returns the total of all dice from latest roll
    */
int Dice::rollTotal() const
{
    int total = 0;
    for (unsigned int i = 0; i < _latestRoll.size(); i++)
        total += _latestRoll.at(i);
    return total;
}

/* Outputs all dice with a space between them 
    * and no space or newline at the end
    */
ostream &operator<<(ostream &out, const Dice &dice)
{
    out << dice._latestRoll.at(0);
    for (unsigned i = 1; i < dice._latestRoll.size(); i++)
    {
        out << ' ' << dice._latestRoll.at(i);
    }
    return out;
}

int Dice::randInt(int low, int high) const
{
    return (rand() % (high - low + 1)) + low;
}