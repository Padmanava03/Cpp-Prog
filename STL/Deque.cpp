#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> deq = {1, 2, 3, 4, 5};
    
    deq.push_back(6);
    deq.push_front(0);

    for(auto it = deq.begin(); it!=deq.end(); it++){
        cout << *it << " ";
    }

    return 0;
}