#include <iostream>
#include <string>

using namespace std;


class Names{
    public:
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }

    private:
        string name;
};


int main(){
    Names Nm;
    Nm.setName("My name is Khan");
    cout<<Nm.getName();
    return 0;


}