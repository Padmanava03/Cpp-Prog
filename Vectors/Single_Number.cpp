#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums);

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5};

    cout << singleNumber(vec) << endl;

    return 0;
}

int singleNumber(vector<int>& nums){
    int result = 0;
    for(int i: nums){
        result ^= i;
    }
    return result;
}