#include <iostream>
using namespace std;


int getSum(int arr[], int n)
{   
    int sum = 0;
    int i = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + arr[i];
        i++;
    }
    cout << "The sum of array upto index" << i << "is" << sum;
}

int arr[] = {4, 3, 2, 1, 12, 11, 23, 122, 222, 3443, 432, 211, 123213, 123213};

int main(){
    getSum(arr, 10);
}


