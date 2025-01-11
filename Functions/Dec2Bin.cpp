#include <iostream>
using namespace std;

int binary(int num);
int def_pow(int n, int p);

int better_binary(int num);

int main(){
    int dec;
    cin >> dec;
    cout << "(" << better_binary(dec) << ")2" << endl;
    return 0;
}

int binary(int num){
    int heighset_pow = 0;
    while(def_pow(2, heighset_pow) <= num){
        heighset_pow++;
    }
    heighset_pow--;
    int bin = 0;
    int temp = num;
    while(temp > 0){
        int coeff = 0;
        while(coeff*def_pow(2, heighset_pow) <= temp){
            coeff++;
        }
        coeff--;
        bin += coeff*def_pow(10, heighset_pow);
        temp -= coeff*def_pow(2, heighset_pow);
        heighset_pow--;
    }
    return bin;
}

int def_pow(int n, int p){
    int result = 1;
    while(p > 0){
        result *= n;
        p--;
    }
    return result;
}

int better_binary(int num){
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
