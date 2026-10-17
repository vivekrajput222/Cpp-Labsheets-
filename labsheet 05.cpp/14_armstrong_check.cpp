#include <iostream>
using namespace std;

int main() {
    int number, original, digit, digits = 0, sum = 0;
    cout << "Enter a non-negative number: ";
    cin >> number;
    if (number < 0) {
        cout << "Please enter a non-negative number";
        return 0;
    }

    original = number;
    int temp = number;
    do {
        digits++;
        temp /= 10;
    } while (temp != 0);

    temp = number;
    do {
        digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) power *= digit;
        sum += power;
        temp /= 10;
    } while (temp != 0);

    if (sum == original) cout << "Armstrong number";
    else cout << "Not an Armstrong number";
    return 0;
}
