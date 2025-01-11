#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int size_of_array1, int size_of_array2);

int main(){
    int size_of_array1, size_of_array2;
    cin >> size_of_array1 >> size_of_array2;
    int array1[size_of_array1], array2[size_of_array2];
    cout << "Enter the elements of first array: " << endl;
    for(int i=0; i<size_of_array1; i++){
        cin >> array1[i];
    }
    cout << "Enter the elements of second array: " << endl;
    for(int i=0; i<size_of_array2; i++){
        cin >> array2[i];
    }
    cout << "Intersection of the two arrays is:" << endl;
    intersection(array1, array2, size_of_array1, size_of_array2);
    return 0;
}

void intersection(int arr1[], int arr2[], int size_of_array1, int size_of_array2){
    for(int i=0; i<size_of_array1; i++){
        for(int j=0; j<size_of_array2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << endl;
            }
        }
    }
}