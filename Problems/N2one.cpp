#include <iostream>
using namespace std;

void n2One(int n){
    if (n==0)
        return;
    cout<<n<<"  ";
    n2One(n-1);
}

int main(){
    n2One(52);
}