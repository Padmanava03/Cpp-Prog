#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(int arr[], int n, int sum);

int main(){
    int arr[4] = {2, 7, 11, 15};
    vector<int> vec = PairSum(arr, 4, 9);
    for(int i: vec){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

vector<int> PairSum(int arr[], int n, int sum){
    vector<int> v;
    int low = 0, high = n-1;
    int PairSum = 0;
    while(low < high){
        PairSum = arr[low] + arr[high];
        if(PairSum > sum){
            high--;
        }
        else if(PairSum < sum){
            low++;
        }
        else{
            v.push_back(arr[low]);
            v.push_back(arr[high]);
            return v;
        }
    }
}