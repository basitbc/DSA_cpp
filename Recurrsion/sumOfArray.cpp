#include <iostream>
using namespace std;

int sumOfArray(int a[], int n)
{
    if (n <= 0)
        return 0;
    else
        ;
    return (a[n - 1] + sumOfArray(a, n - 1));
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 100};
    int N = sizeof(a) / sizeof(a[0]);
    cout << sumOfArray(a, N);
    return 0;
}