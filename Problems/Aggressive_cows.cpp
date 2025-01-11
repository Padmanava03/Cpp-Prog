#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int possibleDistance(vector<int>& arr, int n, int c);
bool isPossible(vector<int>& arr, int n, int c, int distance);

int main(){
    vector<int> arr= {1, 2, 8, 4, 9};
    int n = 5, c = 3;

    cout << possibleDistance(arr, n, c) << endl;

    return 0;
}

bool isPossible(vector<int>& arr, int n, int c, int distance){
int cows = 1, lastPlaced = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] - lastPlaced >= distance){
            cows++;
            lastPlaced = arr[i];
        }
        if(cows == c){
            return true;
        }
    }
    
    return false;
}

int possibleDistance(vector<int>& arr, int n, int c){
    sort(arr.begin(), arr.end());
    
    int st = 1, end = arr[n-1]-arr[0], ans = -1;

    while(st <= end){
        int mid = st+(end-st)/2;

        if(isPossible(arr, n, c, mid)){
            ans = mid;
            st = mid+1;
        }else{
            end = mid-1;
        }
    }

    return ans;
}