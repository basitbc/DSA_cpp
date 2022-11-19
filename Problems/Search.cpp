#include <iostream>
using namespace std;

int arr[] = {10, 20, 22, 44, 33, 221};

int search(int arr[], int n, int x)
{
    for (int i = 0; i <= x; i++)
    {
        if (arr[i] == n)
        
            cout << "The Numer is in it" << x;
        
        else 
            cout<<"the Number not found";
        
    }
        
}

int main()
{
    search(arr, 10, 5);
}