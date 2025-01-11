#include <iostream>
using namespace std;

int decimal(int num);

int main(){
    int bin;
    cin >> bin;
    cout << "(" << decimal(bin) << ")10" << endl;
    return 0;
}

int decimal(int num){
    int dec = 0, x = 1;
    while(num > 0){
        int rem = num % 10;
        dec += rem*x;
        x *= 2;
        num = num/10;
    }
    return dec;
}