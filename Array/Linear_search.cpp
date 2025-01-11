#include <iostream>
using namespace std;

int linear_search(int arr[], int size_of_array, int target);

int main(){
    int size_of_array, target;
    cin >> size_of_array;
    int arr[size_of_array];
    cout << "Enter the elements:" << endl;
    for(int i=0; i<size_of_array; i++){
        cin >> arr[i];
    }
    cout << "Enter the seraching element = ";
    cin >> target;
    int found = linear_search(arr, size_of_array, target)+1;
    if(!found){
        cout << "Traget element doesn't exist..." << endl;
    }else{
        cout << "Target element exists at " << found << " position" << endl;
    }
    return 0;
}

int linear_search(int arr[], int size_of_array, int target){
    for(int i=0; i<size_of_array; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}