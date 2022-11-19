#include <iostream>
using namespace std;

int maxSum(int arr[], int n){
    int res = arr[0];
    for(int i = 0; i<n; i++){
        int curr = 0;
        for(int j =i; j<n; j++){
            curr = curr + arr[j];
            res = max(res, curr);
        }
    }
    return res;
}

int main()
{
    int arr[] = {0, 1, 2, 11, 10};
    cout << maxSum(arr, 5);
}