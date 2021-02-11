#ifndef MyString_H
#define MyString_H

class MyString
{
private:
    unsigned _size;
    char *_members;

public:
    MyString();
    ~MyString();
    unsigned size();
    char at(unsigned) const;
    void add(char);
};

#endif