#include <iostream>
using namespace std;

int MooresMajorityElement(int arr[], int n);

int main(){
    int arr[7] = {1, 2, 2, 0, 2, 1, 2};
    cout << MooresMajorityElement(arr, 7) << endl;
    return 0;
}

int MooresMajorityElement(int arr[], int n){
    int count = 0, candidate = 0;
    for(int i=0; i<n; i++){
        if(count == 0){
            candidate = arr[i];
        }
        if(arr[i] == candidate){
            count++;
        }else{
            count--;
        }
    }
    count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == candidate){
            count++;
        }
    }
    if(count > n/2){
        return candidate;
    }else{
        return -1;
    }
}