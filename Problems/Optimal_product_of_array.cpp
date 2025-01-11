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
    // vector<int>postfix(n, 1);
    // vector<int>prefix(n, 1);

    // Prefix product
    for(int i=1; i<n; i++){
        result[i] = result[i-1] * arr[i-1];
    }

    // Postfix product
    int postfix = 1;
    for(int i=n-2; i>=0; i--){
        postfix *= arr[i+1];
        result[i] = result[i] * postfix;
    }

    return result;
}