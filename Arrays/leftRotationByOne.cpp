#include <iostream>
using namespace std;

int lrOne(int arr[], int n){
    int temp=arr[0];
    for(int i=1; i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return 0;
}

int main()
{

    int arr[] = {10, 5, 7, 30}, n = 4;

    cout << "Before Reverse" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    lrOne(arr, n);

    cout << "After Reverse" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}