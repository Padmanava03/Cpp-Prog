#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};

    int *ptr = arr;

    for(int i=0; i<5; i++){
        cout << ptr << "----->" << *ptr << endl;
        cout << arr+i << endl;
        ptr++;
    }

    int *ptr1;
    int *ptr2 = ptr1 + 10;

    cout << "Difference between 'ptr2' and 'ptr1' : " << ptr2 - ptr1 << endl;

    cout << (ptr1 > ptr2) << endl;   

    return 0;
}