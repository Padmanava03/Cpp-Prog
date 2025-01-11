#include <iostream>
using namespace std;

void byPointer(int* ptr);
void byReference(int& ref);

int main(){
    int a = 10;

    cout << "Value of 'a' : " << a << endl;

    byPointer(&a);
    cout << "Value of 'a' : " << a << endl;

    byReference(a);
    cout << "Value of 'a' : " << a << endl;

    return 0;
}

void byPointer(int* ptr){
    *ptr = 20;
}

void byReference(int &ref){
    ref = 30;
}