#include <iostream>
using namespace std;

int slideWin(int arr[], int k, int n)
{
    int sum = 0;
    int res = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < i + k; j++)
        {
            sum = arr[i] + arr[i + 1];
            res = max(res, sum);
        }
    }
    return res;
}

int main()
{

    int arr[] = {1, 8, 30, -5, 20, 7}, n = 6, k = 3;

    cout << slideWin(arr, n, k);
}