#include <iostream>
using namespace std;

int biggestNo(int arr[], int n ){
    int res = 0;
    for(int i=1;i<n; i++)
        if (arr[i]>arr[res])
            res=i;
    return arr[res];
}

int main(){
    int one[] = {1,8,9999999,9,111112,6,9};
    cout<<biggestNo(one,7);
}