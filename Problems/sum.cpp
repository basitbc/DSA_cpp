#include <iostream>
using namespace std;
int sum(int nums[], int target){
for (int i=0; i<=5; i++)
            for(int j=1; j<=5; j++)
                if (nums[i]+nums[j]==target)
                    return i, j;
                    

}

int main(){
    int nums[] = {1,2,3,4,5,6};
    
    cout<<sum(nums, 7);
}

                
            