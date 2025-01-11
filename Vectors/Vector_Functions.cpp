#include <iostream>
#include <vector>
using namespace std;

int main(){
    // size function
    vector<int> vec1 = {1, 2, 3, 4, 5, 6};

    cout << vec1.size() << endl;

    // push_back function
    vector<int> vec2;

    cout << vec2.size() << endl;
    vec2.push_back(25);
    vec2.push_back(35);
    vec2.push_back(45);
    vec2.push_back(55);
    vec2.push_back(65);
    cout << "After push size = " <<vec2.size() << endl;

    // pop_back function
    vec2.pop_back();
    cout << "After pop size = " <<vec2.size() << endl;

    for(int i: vec2){
        cout << i << endl;
    }

    // front function
    cout << "Front element = " << vec2.front() << endl;

    //back function
    cout << "Back element = " << vec2.back() << endl;

    // at function
    for(int i=0; i<vec2.size(); i++){
        cout << vec2.at(i) << endl;
    }

    // capacity function
    cout << "Size of the vector is = " << vec2.size() << endl;
    cout << "Capacity of the vector is = " << vec2.capacity() << endl;

    return 0;
}