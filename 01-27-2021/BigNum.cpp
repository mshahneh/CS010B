#include <iostream>
#include <vector>
#include <cmath>
#include "BigNum.h"

using namespace std;

BigNum::BigNum()
{
    number.push_back(0);
}

BigNum::BigNum(int value)
{
    if (value == 0)
        number.push_back(0);
    else
    {
        while (value > 0)
        {
            number.push_back(value % 10);
            value /= 10;
        }
    }
}

BigNum::BigNum(string &value)
{
    for (int i = value.size() - 1; i >= 0; i--)
    {
        number.push_back(value.at(i) - '0');
    }
}

BigNum::BigNum(vector<int> &value)
{
    for (unsigned i = 0; i < value.size(); i++)
    {
        number.push_back(value.at(i));
    }
}

int BigNum::print()
{
    int result = 0;
    for (int i = number.size() - 1; i >= 0; i--)
    {
        result += pow(10, i) * number.at(i);
    }
    return result;
}

ostream &operator<<(ostream &out, const BigNum &rhs)
{
    for (int i = rhs.number.size() - 1; i >= 0; i--)
    {
        out << rhs.number.at(i);
    }
    return out;
}

BigNum BigNum::operator+(const BigNum rhs) const
{
    vector<int> result;
    int carry = 0, temp = 0;
    for (unsigned i = 0; i < number.size(); i++)
    {
        temp = number.at(i) + rhs.number.at(i) + carry;
        carry = temp / 10;
        result.push_back(temp % 10);
    }
    if (carry != 0)
        result.push_back(carry);
    return BigNum(result);
}

// [ 0, 1 ]
//     [0, 9]
//     [0, 0, 1]