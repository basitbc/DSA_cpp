#include <iostream>
using namespace std;

int noOfZeros(int n)
{
    if (n == 0)
        return 0;

    if (n % 10 == 0)
        return 1 + noOfZeros(n / 10);
    else
        ;
    return noOfZeros(n / 10);
}

int main()
{
    int n = 1100;
    cout << noOfZeros(n);
    return 0;
}