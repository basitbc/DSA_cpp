#include<iostream>
using namespace std;

int count(long n){
    int count = 0;
    while (n >0){
        n = n/10;
        count++;
        
    } 
    cout<<count;
    return count;
    }

int reverse(int givenNum) {

  int reversed_number = 0, remainder;

  while(givenNum != 0) {
    remainder = givenNum % 10;
    reversed_number = reversed_number * 10 + remainder;
    givenNum /= 10;
  }

  return reversed_number;
}

int findPalindrome(int givenNum){

    int res = count(givenNum);
    int rev = reverse(givenNum);
    if (res == 0){
        return true;
    }
    else if(givenNum == 10){
        return true;

    }
    else{
        return false;
    }
}


