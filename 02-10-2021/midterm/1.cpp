#include <iostream>

using namespace std;

void substract(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] -= b[i];
    }
}

int main()
{
    const int max_size = 100;
    int arr1[max_size], arr2[max_size];
    int size_arr1 = 0, size_arr2 = 0;

    int temp;
    cin >> temp;
    while (temp != -1)
    {
        arr1[size_arr1] = temp;
        size_arr1++;
        cin >> temp;
    }

    cin >> temp;
    while (temp != -1)
    {
        arr2[size_arr2] = temp;
        size_arr2++;
        cin >> temp;
    }

    int n;
    cin >> n;

    for (int i = 0; i < size_arr1; i++)
        cout << arr1[i] << ' ';
    cout << endl;

    for (int i = 0; i < size_arr2; i++)
        cout << arr2[i] << ' ';
    cout << endl;

    subtract(arr1, arr2, n);

    for (int i = 0; i < size_arr1; i++)
        cout << arr1[i] << ' ';
    cout << endl;

    for (int i = 0; i < size_arr2; i++)
        cout << arr2[i] << ' ';
    cout << endl;
}