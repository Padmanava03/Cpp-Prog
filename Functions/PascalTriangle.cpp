#include <iostream>
using namespace std;

int nCr(int n, int r);
int Fact(int n);

int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5-i; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<nCr(i, j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int nCr(int n, int r){
    return Fact(n)/(Fact(r)*Fact(n-r));
}

int Fact(int n){
    int f = 1;
    while(n>0){
        f = f*n;
        n--;
    }
    return f;
}