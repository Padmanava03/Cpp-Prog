#include <iostream>
using namespace std;

int Fact(int n);

int main(){
    int n;
    cin>>n;
    cout<<Fact(n)<<endl;
    return 0;
}

int Fact(int n){
    int f = 1;
    while(n>0){
        f = f*n;
        n--;
    }
    return f;
}