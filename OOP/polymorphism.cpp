#include<iostream>
#include<string>
using namespace std;

class Print{
    public:
        void show(int x){
            cout << "Integer: " << x << endl;
        }

        void show(double x){
            cout << "Double: " << x << endl;
        }
};

class Parent{
    public:
        void show(){
            cout << "Parent" << endl;
        }

        virtual void print(){
            cout << "Hello from Parent" << endl;
        }
};

class Child: public Parent{
    public:
        void show(){
            cout << "Child" << endl;
        }

        void print(){
            cout << "Hello from Child" << endl;
        }
};

int main(){
    // Print p;
    // p.show(5);
    // p.show(5.5);
    // Parent p;
    Child c;
    // p.show();
    // c.show();
    c.print();
    
    return 0;
}