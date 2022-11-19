#include <iostream>
using namespace std;

int factorial(int n)

{
    int res = 1;
    for(int i =1; i<=n; i++){
        res = res * i;
    int count =0;
    while(res % 10 == 0){
        count++;
        res = res/10;

    }
        return count;
        cout<<count;
    }

        
}

    
    


int main()
{
    factorial(20);
}
