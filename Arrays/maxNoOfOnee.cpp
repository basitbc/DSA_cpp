#include <iostream>
#include <math.h>
using namespace std;

int max1(int arr[], int n)
{
    int maximum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
         
            if (arr[i] == 0)
            {
                count=0;
            }
            else
                count++;
                maximum = max(maximum, count);    
    }
    
    return maximum;
}

int main()
{
    int arr[] = {0, 1, 1, 1, 0};
    cout << max1(arr, 5);
}