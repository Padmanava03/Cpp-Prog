#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, i;
    cin>>n;
    for(i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<"Not a Prime Number"<<endl;
            break;
        }
    }
    if(i>sqrt(n)){
        cout<<"Prime Number"<<endl;
    }
    return 0;
}