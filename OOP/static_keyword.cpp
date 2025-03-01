#include<iostream>
using namespace std;

void func(){
    static int x = 0;
    cout << x << endl;
    x++;
}

int main(){
    func();
    func();
    func();
    func();
    func();
    
    return 0;
}