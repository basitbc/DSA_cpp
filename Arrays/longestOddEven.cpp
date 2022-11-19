#include <iostream>
using namespace std;

int maxEvenOdd(int arr[], int n)
{
    int curr = 1;
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            curr++;
            res = max(res, curr);
        }

        else
        {
            curr = 1;
        }
    }
    return res;
}

int main()
{

    int arr[] = {5, 10, 21, 6, 3, 7}, n = 6;

    cout << maxEvenOdd(arr, n);
}