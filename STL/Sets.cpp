#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    // set<int> s;

    // s.insert({1, 2, 3, 4, 6, 7, 8, 9, 10});
    // s.insert({2, 4, 6, 10, 12, 14});

    // for(auto i : s){
    //     cout<<i<<" ";
    // }

    // cout<<endl;

    // cout << *(s.lower_bound(5)) << endl;
    
    // cout << *(s.upper_bound(10)) << endl;

    // multiset<int> s;

    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(6);
    // s.insert(7);
    // s.insert(8);
    // s.insert(2);
    // s.insert(4);

    // for(auto i : s){
    //     cout << i << " ";
    // }
    // cout << endl;

    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(2);
    s.insert(4);

    for(auto i : s){
        cout << i << " ";
    }

    cout << endl;

    return 0;
}