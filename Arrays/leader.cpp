#include <iostream>
using namespace std;

void findLeaders(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = false;
                break;
            }
            
        }
        if (flag == true)
            {
                cout << arr[i] << " ";
            }
    }
}

int main()
{

    int arr[] = {1, 2, 333, 200, 10, 1}, n = 6;

    findLeaders(arr, n);
}