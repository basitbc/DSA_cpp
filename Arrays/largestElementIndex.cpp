#include <iostream>
using namespace std;

int larIndex(int arr[], int n)
{
    int large;
    int index;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] < arr[i])
        {
            large = arr[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 9, 3, 10};
    cout << larIndex(arr, 7);
}