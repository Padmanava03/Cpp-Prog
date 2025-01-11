#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec;

    vec = {1, 2, 3};

    cout << vec[0] << endl;

    vector<int> bec(5, 0);

    for(int i: bec){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}