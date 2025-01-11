#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int allowedPages);
int allocateBooks(vector<int>& arr, int n, int m);

int main(){
    vector<int> arr = {15, 17, 20};
    int n = 3, m = 2;

    cout << allocateBooks(arr, n, m) << endl;

    return 0;
}

bool isValid(vector<int>& arr, int n, int m, int maxAllowedPages){
    int stu = 1, pagesAllocated = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > maxAllowedPages) return false;

        if(pagesAllocated + arr[i] <= maxAllowedPages){
            pagesAllocated += arr[i];
        }else{
            stu++;
            pagesAllocated = arr[i];
        }
    }

    return stu > m ? false : true;
}

int allocateBooks(vector<int>& arr, int n, int m){
    if(n < m) return -1;

    int end = 0;
    for(int i=0; i<n; i++){
        end += arr[i];
    }

    int st = 0, ans = -1;

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