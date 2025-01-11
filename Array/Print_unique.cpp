#include <iostream>
using namespace std;

void unique(int arr[], int size_of_array);

int main(){
    int size_of_array;
    cin >> size_of_array;
    int array[size_of_array];
    cout << "Enter the elements: " << endl;
    for(int i=0; i<size_of_array; i++){
        cin >> array[i];
    }
    cout << "Unique elements are:" << endl;
    unique(array, size_of_array);
    return 0;
}

void unique(int arr[], int size_of_array){
    for(int i=0; i<=size_of_array-1; i++){
        int flag = 0;
        for(int j=i+1; j<size_of_array;j++){
            if(arr[j] == -1){
                continue;
            }
            if(arr[i] == arr[j]){
                arr[j] = -1;
                flag = 1;
            }
        }
        if(!flag && arr[i] != -1){
            cout << arr[i] << endl;
        }
    }
}