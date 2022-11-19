#include <iostream>
using namespace std;

int zero2End(int arr[], int n)
{
    int temp[n];
    int front = 0;
    int back = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[front] = arr[i];
            front++;
        }
        else if (arr[i] == 0)
        {
            temp[back] = arr[i];
            back--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    return n;
}

int main()
{

    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 4, 5, 6, 7, 4, 0, 9, 7, 5, 0, 0, 20, 0, 0, 30, 40}, n = 26;

    cout << "Before Removal" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    n = zero2End(arr, n);

    cout << "After Removal" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}