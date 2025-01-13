#include<iostream>
using namespace std;

int main(){
    int a, b;

    cin >> a >> b;

    int t1 = a, t2 = b;

    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        }else{
            b = b % a;
        }
    }

    cout << (t1*t2) / (a+b) << endl;

    return 0;
}