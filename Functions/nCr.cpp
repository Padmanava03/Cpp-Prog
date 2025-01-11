#include <iostream>
using namespace std;

int nCr(int n, int r);
int Fact(int n);

int main(){
    int n, r;
    cin>>n>>r;
    cout<<nCr(n, r)<<endl;
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