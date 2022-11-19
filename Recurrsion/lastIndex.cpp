#include <iostream>
using namespace std;

int lastIndex(int arr1[], int e, int N)
{
    if (N < 0)
        return -1;
    else if (arr1[N] == e)
        return N;
    else
        ;
    return lastIndex(arr1, e, N - 1);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 8, 8, 8, 8, 100};
    int N = sizeof(a) / sizeof(a[0]);
    int element = 8;
    cout << lastIndex(a, element, N);
    return 0;
}