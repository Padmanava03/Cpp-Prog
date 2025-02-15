#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int st, int end){
    int idx = st-1, pivot = arr[end];

    for(int j=st; j<end; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[idx], arr[j]);
        }
    }

    idx++;
    swap(arr[idx], arr[end]);

    return idx;
}

void quickSort(vector<int>& arr, int st, int end){
    if(st < end){
        int pivInd = partition(arr, st, end);

        quickSort(arr, st, pivInd-1);
        quickSort(arr, pivInd+1, end);
    }
}

int main(){
    vector<int> arr = {12, 31, 35, 8, 32, 17};

    quickSort(arr, 0, arr.size()-1);

    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}