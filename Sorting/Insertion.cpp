#include<iostream>
using namespace std;

int main(){
    int arr[5] = {4, 1, 5, 2, 3};
    int n = 5;

    for(int i = 1; i<n; i++){
        int curr = arr[i];
        int prevInd = i-1;

        while(prevInd >= 0 && arr[prevInd] > curr){
            arr[prevInd+1] = arr[prevInd];
            prevInd--;
        }

        arr[prevInd+1] = curr;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}