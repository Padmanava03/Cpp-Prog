#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& vec);

int main(){
    vector<int> vec = {56, 78, 90, 34, 23, 45, 67, 89, 12, 45};

    cout << "Vector in reversed order:" << endl;

    reverse(vec);
    
    for(int i: vec){
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

void reverse(vector<int>& vec){
    int start = 0;
    int end = vec.size()-1;

    while(start < end){
        int temp = vec.at(start);
        vec.at(start) = vec.at(end);
        vec.at(end) = temp;
        start++;
        end--;
    }
}