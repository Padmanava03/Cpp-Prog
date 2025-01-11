#include <iostream>
#include <vector>
using namespace std;

vector<int> arrayProduct(int arr[], int n);

int main(){
    int arr[4] = {1, 2, 3, 4};

    vector<int> result = arrayProduct(arr, 4);
    for(int i: result){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

vector<int> arrayProduct(int arr[], int n){
    vector<int> result(n, 1);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i != j){
                result[i] *= arr[j];
            }
        }
    }
    return result;
}