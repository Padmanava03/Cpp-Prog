#include<iostream>
using namespace std;

class shape{ // abstract class
    public:
        virtual void draw() = 0; // pure virtual function
};

class Circle: public shape{
    public:
        void draw(){
            cout << "Drawing a circle" << endl;
        }
};

int main(){
    Circle c1;

    c1.draw();
    
    return 0;
}