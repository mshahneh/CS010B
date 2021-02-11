#include "MyString.h"

#include <stdexcept>
using namespace std;

MyString::MyString()
{
    _size = 0;
    _members = new char[0];
}

MyString::~MyString()
{
    delete[] _members;
}
unsigned MyString::size()
{
    return _size;
}
char MyString::at(unsigned index) const
{
    if (index < _size)
    {
        return _members[index];
    }
    else
    {
        throw out_of_range("IntVector::at_range_check");
    }
}

void MyString::add(char c)
{
    char *temp = new char[_size + 1];
    for (int i = 0; i < _size; i++)
        temp[i] = _members[i];
    temp[_size] = c;

    _members = temp; //memory leak!
    _size += 1;
}