#include <iostream>
using namespace std;

void PrintFib(int n);

int main(){
    int n;
    cin>>n;
    cout<<"Fibonacci series of "<<n<<" terms is:"<<endl;
    PrintFib(n);
    return 0;
}

void PrintFib(int n){
    int a=0, b=1, fib;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        fib = a+b;
        a = b;
        b = fib;
    }
    return;
}