#include <iostream>
using namespace std;

int main() {
    double a, b;
    char operation;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+': cout << "Result = " << a + b; break;
        case '-': cout << "Result = " << a - b; break;
        case '*': cout << "Result = " << a * b; break;
        case '/':
            if (b != 0) cout << "Result = " << a / b;
            else cout << "Division by zero is not allowed";
            break;
        default: cout << "Invalid operation";
    }
    return 0;
}
