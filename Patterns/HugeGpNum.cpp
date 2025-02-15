/*
1       1
12     21
123   321
1234 4321
123454321
*/

#include<iostream>
using namespace std;

int main(){
    int n = 7;

    for(int i=1; i<=n; i++){

        int k = 1;
        for(; k <= i; k++){
            cout << k;
        }

        for(int j = 1; j < (2*(n-i)); j++){
            cout<<" ";
        }

        k = k == n+1 ? n-1 : k-1;

        for(; k >= 1; k--){
            cout << k;
        }

        cout<<endl;
    }

    return 0;
}