#include <iostream>
#include <cmath>
using namespace std;

int MajorityElement(int arr[], int n);

int main(){
    int arr[5] = {1, 2, 2, 1, 1};
    cout << MajorityElement(arr, 5) << endl;
    return 0;
}

int MajorityElement(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int occurances = 1;
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                arr[j] = -1;
                occurances++;
            }
        }
        if(occurances > floor(n/2)){
            return arr[i];
        }
    }
}