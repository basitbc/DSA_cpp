#include <iostream>
using namespace std;

void d2B(int n){
    if (n==0)
        return;
    d2B(n/2);
    cout<<(n%2);
}

int main(){
    d2B(13);
}