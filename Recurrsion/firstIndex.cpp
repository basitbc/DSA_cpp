#include <iostream>
using namespace std;

int firstIndex(int arr1[], int e, int index, int N)
{
    if (index > N)
        return -1;
    else if (arr1[index] == e)
        return index;
    else
        ;
    return firstIndex(arr1, e, index + 1, N);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 8, 100};
    int index = 0;
    int N = sizeof(a) / sizeof(a[0]);
    int element = 11;
    cout << firstIndex(a, element, index, N);
    return 0;
}