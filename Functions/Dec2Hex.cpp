#include <iostream>
#include <string>
using namespace std;

string hexadecimal(int num);
int def_pow(int n, int p);

string better_hexadecimal(int num);

int main(){
    int dec;
    cin >> dec;
    cout << "(" << hexadecimal(dec) << ")16" << endl;
    return 0;
}

string hexadecimal(int num){
    int heighset_pow = 0;
    while(def_pow(16, heighset_pow) <= num){
        heighset_pow++;
    }
    heighset_pow--;
    string hex = "";
    int temp = num;
    while(temp > 0){
        int coeff = 0;
        while(coeff*def_pow(16, heighset_pow) <= temp){
            coeff++;
        }
        coeff--;
        if(coeff <= 9){
            hex.append(to_string(coeff));
        }else{
            hex.push_back((char)('A' + coeff - 10));
        }
        temp -= coeff*def_pow(16, heighset_pow);
        heighset_pow--;
    }
    return hex;
}

int def_pow(int n, int p){
    int result = 1;
    while(p > 0){
        result *= n;
        p--;
    }
    return result;
}

string better_hexadecimal(int num){
    string hex = "";
    int x =1;
    while(x <= num){
        x *= 16;
    }
    x /= 16;
    while(x > 0){
        int first_digit = num/x;
        num -= first_digit*x;
        x /= 8;
        if(first_digit <= 9){
            hex.append(to_string(first_digit));
        }else{
            hex.push_back((char)('A' + first_digit - 10));
        }
    }
    return hex;
}
