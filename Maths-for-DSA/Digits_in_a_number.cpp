#include<iostream>
using namespace std;
#include<cmath>

int main(){
    int n;

    cout << "Enter a number = ";
    cin >> n;

    int rev = 0, m = n;

    while(n != 0){
        int rem = n % 10;
        rev++;
        n = n / 10;
    }

    cout << "Number of digits = " << rev << endl;
    cout << (int)(log10(m) + 1) << endl;

    return 0;
}