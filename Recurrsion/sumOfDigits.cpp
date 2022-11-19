#include <iostream>
using namespace std;

int sumOfDigits(int n){
    if (n==0)
        return 0;
    int ld = n%10;
    return ld + sumOfDigits(n/10);
}


int main(){
    cout<<sumOfDigits(99990);
}



RS