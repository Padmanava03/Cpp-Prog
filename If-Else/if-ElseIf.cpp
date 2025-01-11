#include <iostream>
using namespace std;

int main(){
    int amount;
    cout<<"Enter the amount = ";
    cin>>amount;
    if(amount>5000){
        cout<<"Go to shopping with Neha"<<endl;
    }else if(amount>2000){
        cout<<"Go to shopping with Reshmi"<<endl;
    }else{
        cout<<"Go to shopping with friends"<<endl;
    }
    return 0;
}