#include <iostream>
using namespace std;

bool ifSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

int main()
{

    int arr[] = {5, 10, 30, 200, 350}, n = 5;

    printf("%s", ifSorted(arr, n) ? "true" : "false");
}