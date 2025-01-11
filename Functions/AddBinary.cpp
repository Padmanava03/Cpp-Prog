#include <iostream>
using namespace std;

int add_bin(int bin1, int bin2);
int decimal(int num);
int binary(int num);

int main(){
    int m, n;
    cin >> m >> n;
    cout << "(" << add_bin(m ,n) << ")2" << endl;
    return 0;
}

int add_bin(int bin1, int bin2){
    return binary(decimal(bin1) + decimal(bin2));
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

int binary(int num){
    int bin = 0, x =1;
    while(x <= num){
        x *= 2;
    }
    x /= 2;
    while(x > 0){
        int first_digit = num/x;
        num -= first_digit*x;
        x /= 2;
        bin = bin*10 + first_digit;
    }
    return bin;
}
