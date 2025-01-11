#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1, num2, i;
    cin>>num1>>num2;
    cout<<"Prime Numbers are:"<<endl;
    for(i=num1; i<num2; i++){
        if(i==0 || i==1){
            continue;
        }
        int j;
        for(j=2; j<=sqrt(i); j++){
            if(i%j==0){
                break;
            }
        }
        if(j>sqrt(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}