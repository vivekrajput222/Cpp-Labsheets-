#include <iostream>
using namespace std;

int main() {
    int number, temp, sum = 0;
    cout << "Enter a non-negative number: ";
    cin >> number;
    if (number < 0) {
        cout << "Please enter a non-negative number";
        return 0;
    }

    temp = number;
    do {
        int digit = temp % 10, factorial = 1;
        for (int i = 1; i <= digit; i++) factorial *= i;
        sum += factorial;
        temp /= 10;
    } while (temp != 0);

    if (sum == number) cout << "Strong number";
    else cout << "Not a strong number";
    return 0;
}
