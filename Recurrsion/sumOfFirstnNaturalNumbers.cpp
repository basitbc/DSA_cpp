#include <iostream>
using namespace std;

int FnNaturalNos(int n){
    int res;
    if (n==0)
        return 0;
    else
        return n + FnNaturalNos(n-1);
         
}

int main(){
    cout<<FnNaturalNos(100);
}