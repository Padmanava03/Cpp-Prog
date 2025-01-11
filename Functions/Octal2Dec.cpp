#include <iostream>
using namespace std;

int octal(int num);

int main(){
    int oct;
    cin >> oct;
    cout << "(" << octal(oct) << ")10" << endl;
    return 0;
}

int octal(int num){
    int oct = 0, x = 1;
    while(num > 0){
        int rem = num % 10;
        oct += rem*x;
        x *= 8;
        num = num/10;
    }
    return oct;
}