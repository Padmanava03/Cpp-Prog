#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(string name, int age){
            this->name = name;
            this->age = age;
        }
};

class Student : virtual public Person{
    public:
        int roll;

        Student(string name, int age, int roll) : Person(name, age){
            this->roll = roll;
        }

        // void info(){
        //     cout << "Name: " << name << endl;
        //     cout << "Age: " << age << endl;
        //     cout << "Roll: " << roll << endl;
        // }
};

class Teacher : virtual public Person{
    public:
        double salary;
        string subject;

        Teacher(string name, int age, double salary, string subject) : Person(name, age){
            this->salary = salary;
            this->subject = subject;
        }
};

class TA : public Student, public Teacher{
    public:
        TA(string name, int age, double salary, string subject, int roll) : Person(name, age), Student(name, age, roll), Teacher(name, age, salary, subject){
            
        }

        void info(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll: " << roll << endl;
            cout << "Subject: " << subject << endl;
            cout << "Salary: " << salary << endl;
        }
};

class GraduateStudent : public Student{
    public:
        string subject;

        GraduateStudent(string name, int age, int roll, string subject) : Person(name, age), Student(name, age, roll){
            this->subject = subject;
        }

        // void info(){
        //     cout << "Name: " << name << endl;
        //     cout << "Age: " << age << endl;
        //     cout << "Roll: " << roll << endl;
        //     cout << "Subject: " << subject << endl;
        // }
};

int main(){
    // Student s1("Rahul", 20, 101);
    // s1.info();

    // cout << s1.name << endl;

    // GraduateStudent gs1("Rahul", 20, 101, "OOP");
    // gs1.info();

    TA ta1("Rahul", 20, 20000, "OOP", 101);
    ta1.info();

    return 0;
}