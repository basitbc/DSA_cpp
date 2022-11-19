#include <iostream>
using namespace std;

bool isPalindrome(string str1, int a, int n)
{
    if (a >= n)
        return true;
    return ((str1[a] == str1[n]) &&
            isPalindrome(str1, a + 1, n - 1));
}

int main()
{

    string s = "GeekskeeG";

    printf("%s", isPalindrome(s, 0, s.length() - 1) ? "true" : "false");

    return 0;
}
