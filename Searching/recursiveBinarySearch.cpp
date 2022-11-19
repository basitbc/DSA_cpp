#include <iostream>
using namespace std;

int recursiveBS(int arr[], int start, int end, int target )
{
    
    // Base Case
    if(start>end){
        return -1;
    }
    
    int mid = (start+end)/2; 

    if(arr[mid]==target){
        return mid;
    }
    
    else if(arr[mid]>target){
        end = mid-1;
        return recursiveBS(arr,start,end,target);
}
    else;
        start = mid + 1;
        return recursiveBS(arr,start,end,target);
    
}



int main(){
    int arr[] = {20,30,40,50,60,70,80,90};
    int n = 8;
    int start = 0;
    int end = n-1;
    int target = 20;
    cout<<recursiveBS(arr,start,end,target);
}
