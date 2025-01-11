#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> list1(5, 100);

    list1.pop_back();
    list1.pop_front();
    
    for(int i: list1){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}