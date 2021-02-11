#include <iostream>

using namespace std;
const int m = 2, n = 3;

void print(double arr[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << ' ';
    }
}

int main()
{

    double a[m][n]; // = {{1, 2, 3}, {4, 5, 6}};
    // double b[] = {1, 2, 3, 4, 5, 6};

    int *x = new int;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << &a[i][j] << ' ';
        cout << endl;
    }

    cout << endl;
    print(a);
}