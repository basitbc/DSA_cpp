#include <iostream>
using namespace std;

void lrN(int arr[], int a, int n)
{
    int temp[a];

    for (int i = 0; i < a; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = a; i < n; i++)
    {
        arr[i - a] = arr[i];
    }
    for (int i = 0; i  < a; i++)
    {
        arr[n - a + i] = temp[i];
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5}, n = 5, a = 2;

    cout << "Before Rotation" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    lrN(arr, a, n);

    cout << "After Rotation" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}