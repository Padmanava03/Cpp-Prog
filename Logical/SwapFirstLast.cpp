#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, temp, first, last, digits = 0;
    cin>>n;
    temp = n;
    last = temp%10;
    while(temp>0){
        first = temp%10;
        temp = temp/10;
    }
    temp = n;
    do{
        temp = temp/10;
        digits++;
    }while(temp>0);
    temp = n - (first*pow(10, digits-1) + last);
    temp = last*pow(10, digits-1) + temp + first;
    cout<<temp<<endl;
    return 0;
}