#include <iostream>
#include <vector>
using namespace std;

int Binary(vector<int>& arr, int tar);
int recBinary(vector<int>& arr, int tar, int st, int end);

int main(){
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    cout << Binary(arr1, tar1) << endl;
    cout << recBinary(arr1, tar1, 0, arr1.size()-1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 0;
    cout << Binary(arr2, tar2) << endl;
    cout << recBinary(arr2, tar2, 0, arr2.size()-1) << endl;

    return 0;
}

int Binary(vector<int>& arr, int tar){
    int st = 0; int end = arr.size() - 1;
    while(st <= end){
        int mid = st + (end - st) / 2;
        if(tar > arr[mid]){
            st = mid + 1;
        }
        else if(tar < arr[mid]){
            end = mid - 1;
        }
        else{
            return mid;
        }
    }

    return -1;
}

int recBinary(vector<int>& arr, int tar, int st, int end){
    if(st <= end){
        int mid = st + (end - st) / 2;
        if(tar > arr[mid]){
            return recBinary(arr, tar, mid+1, end);
        }else if(tar < arr[mid]){
            return recBinary(arr, tar, st, mid-1);
        }else{
            return mid;
        }        
    }
    
    return -1;
}