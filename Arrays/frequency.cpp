#include <iostream>
using namespace std;

void freq(int arr[], int n)
{
    int freq = 1;
    int i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << "Number: " << arr[i - 1] << " "
             << " Frequency " << freq << endl;
        i++;
        freq = 1;
    }
    if (i == 1 || arr[n - 1] != arr[n - 2])
    {
        cout << arr[i] << " "
             << " Frequency " << 1 << endl;
    }
}

int main()
{
    int arr[] = {1, 1, 1, 1, 2, 2, 3, 4, 5, 5, 5};
    freq(arr, 11);
}