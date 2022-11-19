// Mine Code

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Write a number: ";
//     cin >> n;
//     int number = 0;
//     int total = 0;
//     while (number < n)
//     {
//         number++;
//         total = total + number;
//     }
//     cout << "The sum of first n numbers is: " << total;
// }

// Code by gfg1
// #include <iostream>
// using namespace std;

// int fun1(int n){
//     int x = n*(n+1)/2;
//     cout<<"The number is "<< x;
//     return 0;
// }

// int main(){
//     fun1(10);

// }

// #include <iostream>
// using namespace std;

// int fun2(int number)
// {
//     int sum = 0;
//     for (int itrate = 0; itrate <= number; itrate++)
//     {
//         sum = sum + itrate;
//     }
//     cout << "The sum of n Numbers is " << sum;
// }

// int main()
// {
//     fun2(5);
// }


#include <iostream>
using namespace std;

int fun3(int given){
    int sum = 0;
    for( int i =1; i<=given; i++){
        for(int j = 1; j<= i; j++){
            sum++;
        

        } 

    }
cout << "The sum of n Numbers is " << sum;
}

int main(){
    fun3(5);
}

