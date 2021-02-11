#include <iostream>
#include <vector>
using namespace std;

void print(int array[], int n)
{
    array[1] = -1;
    n = 10;
}

int main()
{
    int n;
    cin >> n;
    // 2d array hold integer number
    // read the array
    // print the array
    // mean of the array

    int array[10], i = 0;
    while (i < n)
    {
        cin >> array[i++];
    }

    print(array, n);
    cout << n << endl;
    int mean = 0;
    for (int i = 0; i < n; i++)
        mean += array[i];
    cout << (mean * 1.0) / n << endl;
    cout << endl;
}