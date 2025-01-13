#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the range linmit = ";
    cin >> n;

    for(int i=0; i<n; i++){
        bool isPrime = true;

        if(i < 2){
            continue;
        }

        for(int j=2; j*j<=i; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime){
            cout << i << endl;
        }
    }

    return 0;
}