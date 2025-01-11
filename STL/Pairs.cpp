#include<iostream>
#include<vector>
using namespace std;

int main(){
    pair<string, int> pair1 = {"Padmanava", 22};

    cout << pair1.first << " is " << pair1.second << " years old." << endl;

    pair<int, pair<int, int>> pair2 = {1, {2, 3}};

    cout << pair2.first << " " << pair2.second.first << " " << pair2.second.second << endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    vector<pair<int, int>> vecPair;

    for(int i=0; i<vec.size(); i++){
        vecPair.push_back({i, vec[i]});
    }

    for(auto i: vecPair){
        cout << i.first << "-->" << i.second << endl;
    }

    return 0;
}