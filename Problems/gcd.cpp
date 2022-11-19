#include <iostream>
#include <limits.h>
using namespace std;

int gcd(int a, int b){
    while( a != b){
        if (a<b)
            b = b -a;
        
        else
            a = a - b;
        
    }
        return a;
}


//  Optimized Implementation
int optGcd(int a, int b){
    if (b == 0)
        return a;
    else
        return optGcd(b, a%b);
    }


int main(){
    cout<<gcd(10, 15)<<endl;
    cout<<optGcd(10,15);
    return 0;
    
}