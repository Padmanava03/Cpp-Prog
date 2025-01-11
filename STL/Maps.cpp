#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    map<int, int> m;

    m.insert({1, 10});
    m.emplace(2, 20);
    m.emplace(3, 30);
    m.emplace(4, 40);
    m.emplace(30, 50);

    m.erase(2);

    if(m.find(3) != m.end()){
        cout << m[3] << endl;
    }

    // multimap<int, int> m;

    // m.emplace(1, 10);
    // m.emplace(2, 20);
    // m.emplace(3, 30);
    // m.emplace(1, 40);

    // m.erase(m.find(1));

    // for(auto i: m){
    //     cout << i.first << " " << i.second << endl;
    // }

    // unordered_map<string, int> m;

    // m.emplace("tv", 10);
    // m.emplace("fridge", 20);
    // m.emplace("laptop", 30);
    // m.emplace("cooker", 40);

    // for(auto i: m){
    //     cout << i.first << " " << i.second << endl;
    // }

    return 0;
}