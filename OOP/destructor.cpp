#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
        string name;
        double* cgpaPtr;

        Student(string name, double cgpa){
            this->name = name;
            this->cgpaPtr = new double;
            *(this->cgpaPtr) = cgpa;
        }

        ~Student(){
            delete cgpaPtr;
            cout << "Destructor called" << endl;
        }
};

int main(){
    Student S1("Rahul", 7.6);

    return 0;
}