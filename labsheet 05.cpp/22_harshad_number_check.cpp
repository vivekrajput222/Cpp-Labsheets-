#include <iostream>
using namespace std;

int main() {
    int number, temp, digitSum = 0;
    cout << "Enter a positive number: ";
    cin >> number;
    if (number <= 0) {
        cout << "Please enter a positive number";
        return 0;
    }

    temp = number;
    while (temp > 0) {
        digitSum += temp % 10;
        temp /= 10;
    }

    if (number % digitSum == 0) cout << "Harshad number";
    else cout << "Not a Harshad number";
    return 0;
}
