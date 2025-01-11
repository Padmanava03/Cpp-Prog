#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);

int main(){
    int m,n;
    cin>>m>>n;
    cout<<"Prime number are:"<<endl;
    for(int i=m; i<=n; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2; i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}