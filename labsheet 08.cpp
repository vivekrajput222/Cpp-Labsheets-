#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

bool isPrime(int number) {
    if (number < 2) return false;
    for (int divisor = 2; divisor * divisor <= number; divisor++) {
        if (number % divisor == 0) return false;
    }
    return true;
}

void printFibonacci(int terms) {
    int first = 0, second = 1;
    for (int i = 0; i < terms; i++) {
        cout << first << (i + 1 == terms ? '\n' : ' ');
        int next = first + second;
        first = second;
        second = next;
    }
}

void bubbleSort(vector<int>& values) {
    for (size_t i = 0; i < values.size(); i++) {
        bool swapped = false;
        for (size_t j = 0; j + 1 < values.size() - i; j++) {
            if (values[j] > values[j + 1]) {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

string copyString(const string& source) {
    return source;
}

int countWords(const string& text) {
    istringstream input(text);
    string word;
    int count = 0;
    while (input >> word) count++;
    return count;
}

int binarySearch(const vector<int>& values, int target) {
    int left = 0, right = static_cast<int>(values.size()) - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (values[middle] == target) return middle;
        if (values[middle] < target) left = middle + 1;
        else right = middle - 1;
    }
    return -1;
}

void addMatrices() {
    int rows, columns;
    cout << "Enter rows and columns: ";
    cin >> rows >> columns;
    if (rows <= 0 || columns <= 0) {
        cout << "Dimensions must be positive.\n";
        return;
    }

    vector<vector<int>> first(rows, vector<int>(columns));
    vector<vector<int>> second(rows, vector<int>(columns));
    cout << "Enter first matrix:\n";
    for (auto& row : first)
        for (int& value : row) cin >> value;
    cout << "Enter second matrix:\n";
    for (auto& row : second)
        for (int& value : row) cin >> value;

    cout << "Sum matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            cout << first[i][j] + second[i][j] << ' ';
        cout << '\n';
    }
}

void sumDiagonal() {
    int size;
    cout << "Enter size of square matrix: ";
    cin >> size;
    if (size <= 0) {
        cout << "Size must be positive.\n";
        return;
    }

    vector<vector<int>> matrix(size, vector<int>(size));
    cout << "Enter matrix elements:\n";
    for (auto& row : matrix)
        for (int& value : row) cin >> value;

    int sum = 0;
    for (int i = 0; i < size; i++) sum += matrix[i][i];
    cout << "Sum of main diagonal: " << sum << '\n';
}

void swapValues(int& first, int& second) {
    int temp = first;
    first = second;
    second = temp;
}

class StudentRecord {
private:
    string name;
    int rollNo{};
    double marks{};

public:
    void input() {
        cout << "Enter student name: ";
        getline(cin >> ws, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() const {
        cout << "\nStudent Details\nName: " << name
             << "\nRoll number: " << rollNo
             << "\nMarks: " << marks << '\n';
    }
};

class CarVehicle {
public:
    string brand;
    double price;

    void display() const {
        cout << "Brand: " << brand << ", Price: " << price << '\n';
    }
};

class BankAccount {
private:
    double balance;

public:
    explicit BankAccount(double openingBalance = 0) : balance(openingBalance < 0 ? 0 : openingBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful.\n";
        } else {
            cout << "Deposit amount must be positive.\n";
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Withdrawal amount must be positive.\n";
        } else if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }

    void displayBalance() const {
        cout << "Current balance: " << balance << '\n';
    }
};

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

class StudentInherit : public Person {
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

class CalculatorOverload {
public:
    int add(int first, int second) {
        return first + second;
    }

    double add(double first, double second) {
        return first + second;
    }
};

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
private:
    double radius;

public:
    explicit Circle(double value) : radius(value) {}
    double area() const override { return 3.141592653589793 * radius * radius; }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override { return length * width; }
};

int main() {
    int choice;

    do {
        cout << "\n=== LABSHEET 8 MENU ===\n";
        cout << "1. Check prime number\n";
        cout << "2. Fibonacci series\n";
        cout << "3. Bubble sort\n";
        cout << "4. Copy string\n";
        cout << "5. Count words\n";
        cout << "6. Binary search\n";
        cout << "7. Add matrices\n";
        cout << "8. Diagonal sum\n";
        cout << "9. Swap using call by reference\n";
        cout << "10. Student class\n";
        cout << "11. Car class objects\n";
        cout << "12. Bank account encapsulation\n";
        cout << "13. Single inheritance\n";
        cout << "14. Function overloading\n";
        cout << "15. Abstraction using Shape\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int number;
                cout << "Enter a number: ";
                cin >> number;
                if (isPrime(number))
                    cout << number << " is a prime number.\n";
                else
                    cout << number << " is not a prime number.\n";
                break;
            }
            case 2: {
                int terms;
                cout << "How many terms? ";
                cin >> terms;
                if (terms <= 0) cout << "Enter a positive number of terms.\n";
                else printFibonacci(terms);
                break;
            }
            case 3: {
                int count;
                cout << "Enter number of elements: ";
                cin >> count;
                if (count <= 0) {
                    cout << "Count must be positive.\n";
                    break;
                }
                vector<int> values(count);
                cout << "Enter " << count << " elements: ";
                for (int& value : values) cin >> value;
                bubbleSort(values);
                cout << "Sorted array: ";
                for (int value : values) cout << value << ' ';
                cout << '\n';
                break;
            }
            case 4: {
                string source;
                cin.ignore();
                cout << "Enter a string: ";
                getline(cin, source);
                string destination = copyString(source);
                cout << "Copied string: " << destination << '\n';
                break;
            }
            case 5: {
                string text;
                cin.ignore();
                cout << "Enter a sentence: ";
                getline(cin, text);
                cout << "Number of words: " << countWords(text) << '\n';
                break;
            }
            case 6: {
                int count;
                cout << "Enter number of sorted elements: ";
                cin >> count;
                if (count <= 0) {
                    cout << "Count must be positive.\n";
                    break;
                }
                vector<int> values(count);
                cout << "Enter elements in ascending order: ";
                for (int& value : values) cin >> value;
                int target;
                cout << "Enter element to search: ";
                cin >> target;
                int index = binarySearch(values, target);
                if (index == -1) cout << "Element not found.\n";
                else cout << "Element found at position " << index + 1 << ".\n";
                break;
            }
            case 7:
                addMatrices();
                break;
            case 8:
                sumDiagonal();
                break;
            case 9: {
                int first, second;
                cout << "Enter two numbers: ";
                cin >> first >> second;
                swapValues(first, second);
                cout << "After swapping: " << first << ' ' << second << '\n';
                break;
            }
            case 10: {
                StudentRecord student;
                student.input();
                student.display();
                break;
            }
            case 11: {
                CarVehicle firstCar{"Toyota", 1200000};
                CarVehicle secondCar{"Hyundai", 950000};
                CarVehicle thirdCar{"Tata", 800000};
                firstCar.display();
                secondCar.display();
                thirdCar.display();
                break;
            }
            case 12: {
                double openingBalance, depositAmount, withdrawalAmount;
                cout << "Enter opening balance: ";
                cin >> openingBalance;
                BankAccount account(openingBalance);
                cout << "Enter deposit amount: ";
                cin >> depositAmount;
                account.deposit(depositAmount);
                cout << "Enter withdrawal amount: ";
                cin >> withdrawalAmount;
                account.withdraw(withdrawalAmount);
                account.displayBalance();
                break;
            }
            case 13: {
                StudentInherit student;
                student.inputStudent();
                cout << "\nStudent Details\n";
                student.displayStudent();
                break;
            }
            case 14: {
                CalculatorOverload calculator;
                cout << "Integer addition: " << calculator.add(5, 7) << '\n';
                cout << "Decimal addition: " << calculator.add(2.5, 3.7) << '\n';
                break;
            }
            case 15: {
                double radius, length, width;
                cout << "Enter circle radius: ";
                cin >> radius;
                cout << "Enter rectangle length and width: ";
                cin >> length >> width;

                Circle circle(radius);
                Rectangle rectangle(length, width);
                cout << fixed << setprecision(2);
                cout << "Circle area: " << circle.area() << '\n';
                cout << "Rectangle area: " << rectangle.area() << '\n';
                break;
            }
            case 0:
                cout << "Exiting LabSheet 8 program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
