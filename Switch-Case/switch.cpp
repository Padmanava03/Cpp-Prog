#include <iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    switch(ch){
        case 'a':
            cout<<"Hello"<<endl;
            break;
        case 'b':
            cout<<"hola"<<endl;
            break;
        case 'c':
            cout<<"Bonjour"<<endl;
            break;
        default:
            cout<<"I am still leraning"<<endl;
    }
    return 0;
}