#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int paintersPartition(vector<int>& arr, int n, int m);
bool isValid(vector<int>& arr, int n, int m, int minTime);

int main(){
    vector<int> arr = {40, 30, 10, 12};
    int n = 4, m = 2;

    cout << paintersPartition(arr, n, m) << endl;

    return 0;
}

bool isValid(vector<int>& arr, int n, int m, int minTime){
    int painters = 1, time = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > minTime) return false;

        if(time + arr[i] <= minTime){
            time += arr[i];
        }else{
            painters++;
            time = arr[i];
        }
    }

    return painters > m ? false : true;
}

int paintersPartition(vector<int>& arr, int n, int m){
    sort(arr.begin(), arr.end());

    if(n < m) return -1;

    int st = arr[n-1];
    for(int i : arr){
        st = max(st, i);
    }
    int end = 0;
    for(int i : arr){
        end += i;
    }

    int ans = -1;

    while(st <= end){
        int mid = st+(end-st)/2;
        
        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }
    
    return ans;
}