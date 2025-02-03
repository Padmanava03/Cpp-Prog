#include<iostream>
#include<cstring>
using namespace std;

void printPerms(string s, int idx){
    if(idx == s.length()){
        for(char c : s){
            cout << c;
        }
        cout << endl;
    }

    for(int i=idx; i<s.length(); i++){
        swap(s[i], s[idx]);
        printPerms(s, idx+1);
        swap(s[i], s[idx]);
    }
}

int main(){
    string s = "abc";
    printPerms(s, 0);
    return 0;
}