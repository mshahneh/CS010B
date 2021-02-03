#include <iostream>
#include <vector>
using namespace std;

class BigNum
{
public:
    BigNum();
    BigNum(int);
    BigNum(string &);
    BigNum(vector<int> &);
    int print();
    friend ostream &operator<<(ostream &out, const BigNum &rhs);
    BigNum operator+(const BigNum) const;

private:
    vector<int> number;
};
