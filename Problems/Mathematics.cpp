#include<iostream>
using namespace std;

int noOfDigits(long n){
    int count = 0;
    while (n >0){
        n = n/10;
        count++;
        
    } 
    cout<<count;
    return count;
    }


int main(){
    noOfDigits(2344423243543646462);
  
}


