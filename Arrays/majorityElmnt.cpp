#include <iostream>
using namespace std;

int majElm(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i+1; j < n; j++)
        
            if (arr[i] == arr[j])
            
                count++;
            
        if (count > n / 2)
            return i;
    }
    return -1;

}

int main()
{

    int arr[] = {6, 7, 6, 6, 6, 6,6}, n = 7;

    cout << majElm(arr, n);
}