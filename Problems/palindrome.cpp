#include <iostream>
using namespace std;

// int count(long n){
//     int count = 0;
//     while (n >0){
//         n = n/10;
//         count++;

//     }
//     cout<<count;
//     return count;
//     }

int reverse(int n)
{

    int rev = 0;
    int temp = n;

    while (temp != 0)
    {

        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }
    cout << (rev == n);
    return (rev == n);
}

int main()
{
    reverse(122221);
}
