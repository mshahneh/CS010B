#include <iostream>
#include "Distance.h"
using namespace std;

Distance::Distance()
{
    feet = 0;
    inches = 0;
}

Distance::Distance(unsigned ft, double in)
{
    this->feet = ft;
    this->inches = in;
    init();
}

unsigned Distance::getFeet() const
{
    return feet;
}

double Distance::getInches() const
{
    return inches;
}

double Distance::distanceInInches() const
{
    double totalInches;

    totalInches = getFeet() * 12 + getInches();

    return totalInches;
}

double Distance::distanceInFeet() const
{
    double totalFeet;

    totalFeet = getInches() / 12 + getFeet();

    return totalFeet;
}

double Distance::distanceInMeters() const
{
    double totalMeters;

    totalMeters = distanceInInches() * 0.0254;

    return totalMeters;
}

Distance Distance::operator+(const Distance &rhs) const
{
    Distance disSum;

    disSum.feet = feet + rhs.feet;
    disSum.inches = inches + rhs.inches;

    return disSum;
}

Distance Distance::operator-(const Distance &rhs) const
{
    Distance disDiff;
    disDiff.feet = feet + rhs.feet;
    disDiff.inches = inches + rhs.inches;

    return disDiff;
}

void Distance::init()
{
    while (getInches() >= 12)
    {
        this->feet = feet + 1;
        this->inches = inches - 12;
    }
}

ostream &operator<<(ostream &out, const Distance &rhs)
{

    out << rhs.feet << "'" << rhs.inches << "''" << endl;
    return out;
}

// #include <iostream>
// #include "Distance.h"

// using namespace std;
// const double METERS_PER_INCH = 0.0254;

// Distance::Distance()
// {
//     feet = 0;
//     inches = 0;
// }

// Distance::Distance(unsigned ft, double in)
// {
//     if (in <= 0)
//         in = -1 * in;
//     if (in >= 12)
//     {
//         ft += int(in) / 12;
//         in -= int(in / 12) * 12.0;
//     }
//     feet = ft;
//     inches = in;
// }

// Distance::Distance(double in)
// {
//     if (in < 0)
//         in = -1 * in;
//     int ft = 0;
//     if (in >= 12)
//     {
//         ft += int(in) / 12;
//         in -= int(in / 12) * 12.0;
//     }
//     feet = ft;
//     inches = in;
// }

// unsigned Distance::getFeet() const
// {
//     return feet;
// }

// double Distance::getInches() const
// {
//     return inches;
// }

// double Distance::distanceInInches() const
// {
//     return feet * 12.0 + inches;
// }

// double Distance::distanceInFeet() const
// {
//     return feet + (inches / 12.0);
// }

// double Distance::distanceInMeters() const
// {
//     return distanceInInches() * METERS_PER_INCH;
// }

// Distance Distance::operator+(const Distance &rhs) const
// {
//     return Distance(distanceInInches() + rhs.distanceInInches());
// }

// Distance Distance::operator-(const Distance &rhs) const
// {
//     return Distance(distanceInInches() - rhs.distanceInInches());
// }

// ostream &operator<<(ostream &out, const Distance &rhs)
// {
//     out << rhs.feet << "\' " << rhs.inches << '\"';
//     return out;
// }

// void Distance::init()
// {
//     if (inches < 0)
//         inches = -inches;
//     while (inches >= 12.0)
//     {
//         ++feet;
//         inches -= 12.0;
//     }
// }