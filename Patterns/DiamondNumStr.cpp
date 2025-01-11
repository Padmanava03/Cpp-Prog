#include <iostream>
using namespace std;

int main(){
    for(int i=6; i>=3; i--){
        for(int j=2; j<i; j++){
            cout<<i;
            cout<<(j<i-1?"*":"");
        }
        cout<<endl;
    }
    for(int i=3; i<=6; i++){
        for(int j=2; j<i; j++){
            cout<<i;
            cout<<(j<i-1?"*":"");
        }
        cout<<endl;
    }
    return 0;
}