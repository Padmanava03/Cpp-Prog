#include<iostream>
using namespace std;

class ABC{
    public:
        ABC(){
            cout << "Constructor called" << endl;
        }

        ~ABC(){
            cout << "Destructor called" << endl;
        }
};

int main(){
    if(true){
        static ABC obj;
    }

    cout << "End of main" << endl;

    return 0;
}