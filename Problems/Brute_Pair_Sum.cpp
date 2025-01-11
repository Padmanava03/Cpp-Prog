#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(int arr[], int n, int sum);

int main(){
    int arr[4] = {2, 7, 11, 15};
    vector<int> vec = PairSum(arr, 4, 26);
    for(int i: vec){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

vector<int> PairSum(int arr[], int n, int sum){
    vector<int> v;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == sum){
                v.push_back(arr[i]);
                v.push_back(arr[j]);
                return v;
            }
        }
    }
}