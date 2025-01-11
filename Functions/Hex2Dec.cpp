#include <iostream>
#include <string>
using namespace std;

int hexadecimal(string num);

int main(){
    string hex;
    cin >> hex;
    cout << "(" << hexadecimal(hex) << ")10" << endl;
    return 0;
}

int hexadecimal(string num){
    int dec = 0, x = 1;
    int len = num.size();
    for(int i = len - 1; i >= 0; i--){
        if(num[i] >= '0' && num[i] <= '9'){
            dec += x*(num[i] - '0');
        }else if(num[i] >= 'A' && num[i] <= 'F'){
            dec += x*(num[i] - 'A' + 10);
        }
        x *= 16;
    }
    return dec;
}