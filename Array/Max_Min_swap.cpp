#include <iostream>
#include <climits>
using namespace std;

int max_element(int arr[], int size_of_array);
int min_element(int arr[], int size_of_array);
void max_min_swap(int arr[], int size_of_array);

int main(){
    int size_of_array;
    cin >> size_of_array;
    int arr[size_of_array];
    cout << "Enter the elements: " << endl;
    for(int i=0; i<size_of_array; i++){
        cin >> arr[i];
    }
    cout << "Array after swapping: " << endl;
    max_min_swap(arr, size_of_array);
    return 0;
}

void max_min_swap(int arr[], int size_of_array){
    int maxLoc = max_element(arr, size_of_array);
    int minLoc = min_element(arr, size_of_array);
    swap(arr[maxLoc], arr[minLoc]);
    for(int i=0; i<size_of_array; i++){
        cout << arr[i] << endl;
    }
}

int max_element(int arr[], int size_of_array){
    int maxVal = INT_MIN;
    int maxLoc = 0;
    for(int i=0; i<size_of_array; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
            maxLoc = i;
        }
    }
    return maxLoc;
}

int min_element(int arr[], int size_of_array){
    int minVal = INT_MAX;
    int minLoc = 0;
    for(int i=0; i<size_of_array; i++){
        if(arr[i] < minVal){
            minVal = arr[i];
            minLoc = i;
        }
    }
    return minLoc;
}