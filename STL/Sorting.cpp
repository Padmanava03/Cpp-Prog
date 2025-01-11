#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2);

int main(){

    //arrays
    int a[5] = {3, 7, 2, 1, 5};

    int b[5];
    copy(begin(a), end(a), begin(b));

    sort(begin(b), end(b));

    for(int i=0; i<5; i++){
        cout << b[i] <<" ";
    }
    cout<<endl;

    sort(begin(a), end(a), greater<int>());
    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }
    cout<<endl;

    //vectors
    vector<int> v = {3, 7, 2, 1, 5};

    vector<int> x = v;

    sort(begin(x), end(x));

    for(int i : x){
        cout << i << " ";
    }
    cout<<endl;

    sort(begin(v), end(v), greater<int>());
    for(int i : v){
        cout << i << " ";
    }
    cout<<endl;

    //pair vectors
    vector<pair<int, int>> p = {{3, 2}, {7, 1}, {2, 3}, {1,  1}, {5, 4}, {7, 0}};

    sort(begin(p), end(p), comparator);

    for(auto i : p){
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}

// descending order of second element, if second element is same then descending order of first element
bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second > p2.second) return true;
    if(p1.second < p2.second) return false;

    if(p1.first > p2.first) return true;
    else return false;
}