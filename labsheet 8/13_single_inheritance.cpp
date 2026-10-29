// Program 13: Single inheritance: Student inherits Person
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age{};

public:
    void inputPerson() {
        cout << "Enter name: ";
        getline(cin >> ws, name);
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson() const {
        cout << "Name: " << name << "\nAge: " << age << '\n';
    }
};

class Student : public Person {
private:
    double marks{};

public:
    void inputStudent() {
        inputPerson();
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayStudent() const {
        displayPerson();
        cout << "Marks: " << marks << '\n';
    }
};

int main() {
    Student student;
    student.inputStudent();
    cout << "\nStudent Details\n";
    student.displayStudent();
    return 0;
}
