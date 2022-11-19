#include <bits/stdc++.h>
using namespace std;
 
string removechar(string& word,char& ch)
{
    for(int i=0;i<word.length();i++)
    {
        if(word[i]==ch){
        word.erase(word.begin()+i);
        i--;
        }
    }
     
    return word;
}
 
 
// driver's code
int main()
{
    string word="geeksforgeeks";
    char ch='e';
    cout<<removechar(word,ch);
 
    return 0;
}