#include <iostream>
using namespace std;

void reverse(int arr[], int size_of_array);

int main(){
    int size_of_array;
    cin >> size_of_array;
    int arr[size_of_array];
    cout << "Enter the elements: " << endl;
    for(int i=0; i<size_of_array; i++){
        cin >> arr[i];
    }
    reverse(arr, size_of_array);
    cout << "Array in reversed order: " << endl;
    for(int i=0; i<size_of_array; i++){
        cout << arr[i] <<endl;
    }
    return 0;
}

// 2 pointers approach
void reverse(int arr[], int size_of_array){
    int start = 0;
    int end = size_of_array - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}