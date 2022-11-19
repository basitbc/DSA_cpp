#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

// int main(){
//     int age;
//     int numberofppl = 0;
//     int total = 0;
//     cout<<"Enter first person age";
//     cin>>age;
//     while (age!=-1){
//         total += age;
//         numberofppl++;
//         cout<<"Enter next person age or -1 to exit"<<endl;
//         cin>>age;
//     }
//     cout<<"Total age of "<<numberofppl<<" persons are "<<total;
// }



// int main(){
//     int P;
//     cout<<"Enter how much money you invested";
//     cin>>P;

//     int noOfDays;
//     cout<<"Enter Number of days you hold it"<<endl;
//     cin>>noOfDays;

    
//     for (int day =1; day<=noOfDays; day++){
//         int profit = P*pow(1+0.03,day);
//         cout<<profit<<endl;
//     }
//     return 0;
    
// }

// CPP program to convert string
// to char array
#include <iostream>
#include <cstring>
 
using namespace std;
 
// driver code
int main()
{
    // assigning value to string s
    string s;
    cin>>s;
 
    int n = s.length();
 
    // declaring character array
    char char_array[n + 1];
 
    // copying the contents of the
    // string to char array
    strcpy(char_array, s.c_str());
 
    for (int i = 0; i < n; i++)
        cout << char_array[2];
 
    return 0;
}