#include <iostream>
using namespace std;

void findLeaders(int arr[], int n)
{
    int leader = arr[n - 1];
    cout << leader << " ";

    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] > leader)
        {
            cout << arr[i] << " ";
            leader = arr[i];
        }
    }
}

int main()
{

    int arr[] = {1, 2, 333, 200, 10, 1}, n = 6;

    findLeaders(arr, n);
}