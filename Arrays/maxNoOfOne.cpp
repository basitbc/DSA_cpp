#include <iostream>
#include <math.h>
using namespace std;

int max1(int arr[], int n)
{
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
            {
                count++;
            }
            else
                break;
        }
        maximum = max(maximum, count);
    }
    return maximum;
}

int main()
{
    int arr[] = {0, 1, 1, 1, 1};
    cout << max1(arr, 5);
}