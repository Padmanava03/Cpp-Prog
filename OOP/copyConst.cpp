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

        // Shallow Copy Constructor
        // Student(Student& orgStu){
        //     this->name = orgStu.name;
        //     this->cgpaPtr = orgStu.cgpaPtr;
        // }

        // Deep Copy Constructor
        Student(Student& orgStu){
            this->name = orgStu.name;
            this->cgpaPtr = new double;
            *(this->cgpaPtr) = *(orgStu.cgpaPtr);
        }

        void info(){
            cout << name << " has CGPA " << *cgpaPtr << endl;
        }
};

int main(){
    Student S1("Rahul", 7.6);
    S1.info();

    Student S2(S1);
    *(S2.cgpaPtr) = 9.8;

    S2.name = "Neha";
    S2.info();

    return 0;
}