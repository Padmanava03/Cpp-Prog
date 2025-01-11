#include <iostream>
using namespace std;

bool isTriplet(int a, int b, int c);

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(isTriplet(a , b, c)){
        cout << "Pythagorian Triplet" << endl;
    }else{
        cout << "Not a Pythagorian Triplet" << endl;
    }
    return 0;
}

bool isTriplet(int a, int b, int c){
    if(a > b && a > c){
        return (b*b + c*c) < a*a ? true : false;
    }else if(b > a && b > c){
        return (a*a + c*c) < b*b ? true : false;
    }else{
        return (a*a + b*b) < c*c ? true : false;
    }
}