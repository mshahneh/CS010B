#include <iostream>
#include "BigNum.h"

using namespace std;

int main()
{
    //test if constructors work
    BigNum num1 = BigNum(0);
    string s1 = "100000000000000000002000009000000000000000000000000000000000000000000";
    string s2 = "500000000000000000003000006000000000000000000000000000000000000000000";
    BigNum num2 = BigNum(s1);
    BigNum num3 = BigNum(s2);

    if (num1.print() != 0)
    {
        cout << "Error in test";
        return 1;
    }

    cout << (num2 + num3) << endl;

    cout << "well done, everything worked!" << endl;
    ;
    return 0;
}