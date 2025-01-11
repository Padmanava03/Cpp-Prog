#include<iostream>
using namespace std;

int main(){
    int arr[5] = {4, 1, 5, 2, 3};
    int n = 5;

    for(int i=0; i<n-1; i++){
        int minInd = i;

        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minInd]){
                minInd = j;
            }
        }

        swap(arr[i], arr[minInd]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}