#include <iostream>
using namespace std;

int main() {
    int number, i = 1;
    unsigned long long factorial = 1;
    cout << "Enter a non-negative number (0 to 20): ";
    cin >> number;

    if (number < 0 || number > 20) {
        cout << "Please enter a number from 0 to 20";
        return 0;
    }
    while (i <= number) {
        factorial *= i;
        i++;
    }
    cout << "Factorial = " << factorial;
    return 0;
}
