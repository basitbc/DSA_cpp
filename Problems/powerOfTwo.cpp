#include <iostream>
using namespace std;

int powerOfTwo(int n){
    if (n==0){
        return false;
    }

    while(n!=1){
        if (n%2 != 0)
            return false;
        n=n/2;
    }
    return true;
}

int main() {
	
	int n = 10;
	
	printf("%s", powerOfTwo(n)? "true": "false");
}