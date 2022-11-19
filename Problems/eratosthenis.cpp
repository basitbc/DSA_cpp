#include <iostream>
using namespace std;

int era(int n){

        int x;
        for(x=1;x<=n; x++)
            if (n>=2)
            cout<<2<<" ";
            if (n>=3)
            cout<<3<<" ";
            for (int i=5; i*i<=x; i+6)
                if(x % i == 0 || x % (i + 2) == 0)
                    return; 
                else
                    cout<<x;



}


int main(){
    era(12);
} 