#include<iostream>
using namespace std;

int main(){
    int n, temp, armSum = 0;

    cin >> n;
    temp = n;

    while(temp != 0){
        int dig = temp%10;
        armSum += dig*dig*dig;
        temp /= 10;
    }

    if(armSum == n){
        cout << "Armstrong Number" << endl;
    }else{
        cout << "Not an Armstrong Number" << endl;
    }

    return 0;
}