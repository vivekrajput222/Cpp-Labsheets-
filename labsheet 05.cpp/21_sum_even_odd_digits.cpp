#include <iostream>
using namespace std;

int main() {
    int number, evenSum = 0, oddSum = 0;
    cout << "Enter a non-negative number: ";
    cin >> number;
    if (number < 0) number = -number;

    do {
        int digit = number % 10;
        if (digit % 2 == 0) evenSum += digit;
        else oddSum += digit;
        number /= 10;
    } while (number != 0);

    cout << "Sum of even digits = " << evenSum << endl;
    cout << "Sum of odd digits = " << oddSum;
    return 0;
}
