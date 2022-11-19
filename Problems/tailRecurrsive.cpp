#include <iostream>
using namespace std;

int fun1(int n){
    if(n == 0)
        return 1;
    return n*fun1(n-1);
};


int main() {
	
	cout<<fun1(6);
}