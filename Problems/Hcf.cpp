#include <iostream>
#include <limits.h>
using namespace std;

 int hcf(int a, int b)
{
	int res = min(a, b);

	while(res>0){
        if (a%res == 0 && b%res == 0){
            break;
        
        res--;
    }   
    return res;

    }


    