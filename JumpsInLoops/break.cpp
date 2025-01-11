#include <iostream>
using namespace std;

int main(){
    int pocketMoney = 2100;
    for(int date=1; date<=30; date++){
        if(date%2==0){
            continue;
        }
        if(pocketMoney==0){
            cout<<"No money left"<<endl;
            break;
        }
        cout<<"Go out today"<<endl;
        pocketMoney = pocketMoney - 300;
    }
    return 0;
}