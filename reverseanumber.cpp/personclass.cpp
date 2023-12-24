#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void get_info() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
private:
    int salary;

public:
    void get_info() {
        Person::get_info();
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display_info() {
        Person::display_info();
        cout << "Salary " << salary << endl;
    }
};

class Student : public Person {
private:
    string student_id;

public:
    void get_info() {
        Person::get_info();
        cout << "Enter student ID: ";
        cin >> student_id;
    }

    void display_info() {
        Person::display_info();
        cout << "Student ID: " << student_id << endl;
    }
};

int main() {
    Employee employee;
    cout << "Enter employee information:\n";
    employee.get_info();
    cout << "\nEmployee information:\n";
    employee.display_info();

    Student student;
    cout << "\nEnter student information:\n";
    student.get_info();
    cout << "\nStudent information:\n";
    student.display_info();

    return 0;
}
