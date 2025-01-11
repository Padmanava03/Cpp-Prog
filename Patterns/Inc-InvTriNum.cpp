#include <iostream>
using namespace std;

int main(){
    int count = 2;
    for(int i=1; i<=4; i++){
        int temp = count;
        for(int j=1; j<=i; j++){
            cout<<temp;
            temp--;
        }
        count += i+1;
        cout<<endl;
    }
    for(int i=4; i>=1; i--){
        count -= i+1;
        int temp = count;
        for(int j=1; j<=i; j++){
            cout<<temp;
            temp--;
        }
        cout<<endl;
    }
    return 0;
}