#include <iostream>
using namespace std;

int main(){
    int amount;
    cout<<"Enter the amout = ";
    cin>>amount;
    if(amount>5000){
        if(amount>10000){
            cout<<"Shopping and Long drive with Neha"<<endl;
        }else{
            cout<<"Shopping with Neha"<<endl;
        }
    }else if(amount>2000){
        cout<<"Shopping with Reshmi"<<endl;
    }else{
        cout<<"Go to shopping with friends"<<endl;
    }
    return 0;
}