#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int arr[], int n);
int main(){
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    cout << maxSubArraySum(arr, 7) << endl;
    return 0;
}

int maxSubArraySum(int arr[], int n){
    int max_sum = INT_MIN;
    for(int st=0; st<n; st++){
        int current_sum = 0;
        for(int end=st; end<n; end++){
            current_sum += arr[end];
            max_sum = max(max_sum, current_sum);
        }
    }
    return max_sum;
}