#include <iostream>
using namespace std;

int main(){
    int num;
    do{
        cin>>num;
    }while (num>0);
    cout<<"You entered a negative number."<<endl;
    return 0;
}