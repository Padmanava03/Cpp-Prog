#include <iostream>
using namespace std;

double Pow(double x, long binaryForm);

int main() {
    double x;
    long n;

    cout << "Enter the number: ";
    cin >> x;

    cout << "Enter the power: ";
    cin >> n;

    cout << "The result is: " << Pow(x, n) << endl;

    return 0;
}

double Pow(double x, long binaryForm){
    double result = 1;

    if(binaryForm == 0) return 1;

    if(x == 0) return 0;

    if(x == 1) return 1.0;

    if(x == -1) return (binaryForm % 2 == 0) ? 1.0 : -1.0;

    if(binaryForm < 0){
        x = 1 / x;
        binaryForm = -binaryForm;
    }

    while(binaryForm > 0){
        if(binaryForm % 2 == 1){
            result *= x;
        }
        x *= x;
        binaryForm /= 2;
    }

    return result;
}
