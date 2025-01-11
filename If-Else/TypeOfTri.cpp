#include <iostream>
using namespace std;

int main(){
    int side1, side2, side3;
    cin>>side1>>side2>>side3;
    if(side1==side2==side3){
        cout<<"Equilateral Triangle"<<endl;
    }else if(side1==side2 || side2==side3 || side3==side1){
        cout<<"Isosceles Traiangle"<<endl;
    }else{
        cout<<"Scalan Triangle"<<endl;
    }
    return 0;
}