#include "MyString.h"

#include <iostream>
using namespace std;

int main()
{
    MyString s;
    s.add('h');
    s.add('e');
    s.add('l');
    s.add('l');
    s.add('o');

    cout << s.size() << endl;
    for (int i = 0; i < s.size(); i++)
        cout << s.at(i);
    cout << endl;

    // 	display(v);
    cout << endl;
}