#include <iostream>
using namespace std;

int product_of_elements(int arr[], int size_of_array);
int sum_of_elements(int arr[], int size_of_array);

int main(){
    int size_of_array;
    cin >> size_of_array;
    int array[size_of_array];
    cout << "Enter the elements: " << endl;
    for(int i=0; i<size_of_array; i++){
        cin >> array[i];
    }
    cout << "Product of all elements of the array is = " << product_of_elements(array, size_of_array) << endl;
    cout << "Sum of all elements of the array is = " << sum_of_elements(array, size_of_array) << endl;
    return 0;
}

int product_of_elements(int arr[], int size_of_array){
    int product = 1;
    for(int i=0; i<size_of_array; i++){
        product *= arr[i];
    }
    return product;
}

int sum_of_elements(int arr[], int size_of_array){
    int sum = 0;
    for(int i=0; i<size_of_array; i++){
        sum += arr[i];
    }
    return sum;
}