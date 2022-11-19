#include <iostream>
using namespace std;

int jP(int n, int k)
{
    if (n == 1)
        return 0;
    else
        ;
    return (jP(n - 1, k) + k) % n;
}

int main()
{
    cout << jP(11, 3);
}
