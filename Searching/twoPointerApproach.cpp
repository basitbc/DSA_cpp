#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[], int sum, int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (arr[start] + arr[end] == sum)
            return true;
        else if (arr[start] + arr[end] > sum)
            end--;
        else
            start++;
    }
    return false;
}

int main()
{
    int arr[] = {2, 3, 6, 8, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 14;

    cout << isPresent(arr, sum, 5);
}