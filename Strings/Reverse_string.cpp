#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin, str);

    string temp_str = str;

    int st = 0, end = temp_str.length()-1;

    while(st < end){
        swap(temp_str[st], temp_str[end]);
        st++;
        end--;
    }

    if(str == temp_str){
        cout << "Palindrome" << endl;
    }else{
        cout << "Not Palindrome" << endl;
    }

    return 0;
}