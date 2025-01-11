#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int OptimalMajorityElement(int arr[], int n);

int main(){
    int arr[7] = {1, 2, 2, 0, 1, 1, 1};
    cout << OptimalMajorityElement(arr, 7) << endl;
    return 0;
}

int OptimalMajorityElement(int arr[], int n){
    sort(arr, arr+n);
    int occurances = 1, ans = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] == arr[i-1]){
            occurances++;
        }else{
            ans = arr[i];
            occurances = 1;
        }
        if(occurances > floor(n/2)){
            return ans;
        }
    }
    return -1;
}