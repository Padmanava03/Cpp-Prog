#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& vec, int target);

int main(){
    vector<int> vec = {56, 78, 90, 34, 23, 45, 67, 89, 12, 45};

    cout << search(vec, 78) << endl;

    return 0;
}

int search(vector<int>& vec, int target){
    for(int i=0; i<vec.size(); i++){
        if(!(vec.at(i) ^ target)){
            return i+1;
        }
    }
    return -1;
}