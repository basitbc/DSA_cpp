#include <iostream>
using namespace std;

int btd(int n)
{
    int num = n;
    int dec_val = 0;
    int base = 1;
    int temp = num;
    while (temp)
    {
        int ld = temp % 10;
        temp = temp / 10;
        dec_val += ld * base;
        base = base * 2;
    }
    return dec_val;
}

int main()
{
    int num = 1010;
 
    cout << btd(num) << endl;
}









