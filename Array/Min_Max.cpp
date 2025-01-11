#include <iostream>
#include <climits>
using namespace std;

int main(){
    int size_of_array;
    cin >> size_of_array;
    int array[size_of_array];
    for(int i=0; i<size_of_array; i++){
        cin >> array[i];
    }
    int maxVal = INT_MIN;
    int minVal = INT_MAX;
    for(int i=0; i<size_of_array; i++){
        maxVal = max(maxVal, array[i]);
        minVal = min(minVal, array[i]);
    }
    cout << "Maximum value is " << maxVal << endl;
    cout << "Minimum value is " << minVal << endl;
    return 0;
}