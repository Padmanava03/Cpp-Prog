#include <iostream>
using namespace std;

int natural_Sum(int n);

int main(){
    int n;
    cout << "Enter a numebr = ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is " << natural_Sum(n) << endl;
    return 0;
}

int natural_Sum(int n){
    return n*(n+1)/2;
}