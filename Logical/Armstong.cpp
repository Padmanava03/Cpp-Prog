#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, temp, armstrong = 0;
    cin>>n;
    temp = n;
    while(temp>0){
        armstrong = pow(temp%10, 3) + armstrong;
        temp = temp/10;
    }
    if(armstrong==n){
        cout<<"Armstrong"<<endl;
    }else{
        cout<<"Not Armstrong"<<endl;
    }
    return 0;
}