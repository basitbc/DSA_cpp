#include <iostream>
using namespace std;

void replace(char str[], int start){
    if (str[start]=='\0'){
        return;
    };

    replace(str, start+1);
    if (str[start] == 'p' && str[start + 1] == 'i'){
        for(int i=strlen(str); i>=start; i--){
            str[i+2]=str[i];
        }
        str[start] = '3';
        str[start+1] = '.';
        str[start+2] = '1';
        str[start+3] = '4';
    }
}

void replacePi(char str[])
{
    replace(str, 0);
}
 
// Driver code
int main()
{
    char str[] = "pippppiiiipi";
 
    // Function call
    replacePi(str);
 
    cout << str;
 
    return 0;
}