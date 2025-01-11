#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> vec1 = {1, 2, 3, 4, 5};
    // vector<int> vec2(vec1);
    // vector<int> vec3 = vec1;

    // vector<int>::iterator ptr = vec1.begin();
    // vector<int>::iterator ptr1 = vec2.begin();
    // vector<int>::iterator ptr2 = vec3.begin();

    // cout << "Address stored in ptr: " << &(*ptr) << endl;
    // cout << "Address stored in ptr1: " << &(*ptr1) << endl;
    // cout << "Address stored in ptr2: " << &(*ptr2) << endl;

    // vec3[0] = 10;

    // cout << vec1[0] << endl;
    // cout << vec3[0] << endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int>::iterator it;

    cout << "Forward traversal using iterator: " << endl;
    for(it = vec.begin(); it!=vec.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    cout << "Backward traversal using iterator: " << endl;
    for(auto i = vec.rbegin(); i!=vec.rend(); i++){
        cout << *i << " ";
    }
    cout << endl;
    
    return 0;
}