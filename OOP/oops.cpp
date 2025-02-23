#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private:
        double salary;
    public:
        string name;
        string dept;
        string subject;

        Teacher(string name, string dept, string subject, double salary){
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            setSalary(salary);
        }

        double getSalary(){
            return (*this).salary;
        }

        void setSalary(double newSalary){
            this->salary = newSalary;
        }

        void info(){
            cout << name << " is a teacher of " << dept << " department and teaches " << subject << " and earns " << salary << " per month." << endl;
        }
};

int main(){
    Teacher T1("Mr. John", "CSE", "OOP", 50000);

    T1.info();

    return 0;
}