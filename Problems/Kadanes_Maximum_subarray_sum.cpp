#include <iostream>
#include <climits>
using namespace std;

int KadanesMaxSubArraySum(int arr[], int n);
int main(){
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    cout << KadanesMaxSubArraySum(arr, 7) << endl;
    return 0;
}

int KadanesMaxSubArraySum(int arr[], int n){
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for(int i=0; i<n; i++){
        curr_sum += arr[i];
        max_sum = max(max_sum, curr_sum);
        if(curr_sum < 0){
            curr_sum = 0;
        }
    }
    return max_sum;
}