#include <iostream>
using namespace  std;

int lcm(int a, int b){
    int res = max(a,b);
    while (true){
        if (res%a==0 && res%b==0)
            return res;
            res++;
    }
    return res;
}   

// Efficient Way
//  Formula a*b = gcd(a,b) * lcm (a,b)

int gcd(int a, int b ){
    if (b == 0)
        return a;
    else
        return gcd(b, a%b);
    
   

    }
int efflcm(int a, int b){
    return (a*b)/ gcd (a, b);
    }

int main (){
    cout<<lcm(12232, 333)<<endl;
    cout<<efflcm(12232, 333);
    return 0;
}


// Time Complexity: O(log(min(a,b)))