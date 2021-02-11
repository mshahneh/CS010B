#include <iostream>

using namespace std;

void test(int x = 2, int y = 3)
{
    cout << x << ' ' << y << endl;
}

int main()
{

    int *p = new int(10);
    delete p;

    // int a;

    // cout << data[0];
    // data[1] = 5;

    // IntVector::~IntVector()
    // {
    //     delte[] _data;
    // }
    int **p2 = &p;
    int ***p3 = &p2;
    cout << p << ' ' << *p << endl;
    cout << p3 << ' ' << *p3 << ' ' << *(*p3) << ' ' << *(*(*p3)) << endl;

    cout << endl;
    test();
    test(5);
    test(5, 10);
}