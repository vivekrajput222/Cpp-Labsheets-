// Program 10: Student class with input and display member functions
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll_no{};
    double marks{};

public:
    void input() {
        cout << "Enter student name: ";
        getline(cin >> ws, name);
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() const {
        cout << "\nStudent Details\nName: " << name
             << "\nRoll number: " << roll_no
             << "\nMarks: " << marks << '\n';
    }
};

int main() {
    Student student;
    student.input();
    student.display();
    return 0;
}
