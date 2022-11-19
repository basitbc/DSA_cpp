#include <iostream>
using namespace std;

void zero2End(int arr[], int n){
    int count =0;
    for (int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main()
{

    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 4, 5, 6, 7, 4, 0, 9, 7, 5, 0, 0, 20, 0, 0, 30, 40}, n = 26;

    cout << "Before Removal" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    zero2End(arr, n);

    cout << "After Removal" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}