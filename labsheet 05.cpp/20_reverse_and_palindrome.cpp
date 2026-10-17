#include <iostream>
using namespace std;

int main() {
    int number, temp, reverse = 0;
    cout << "Enter a non-negative number: ";
    cin >> number;
    if (number < 0) {
        cout << "Please enter a non-negative number";
        return 0;
    }

    temp = number;
    do {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    } while (temp != 0);

    cout << "Reverse = " << reverse << endl;
    if (reverse == number) cout << "Palindrome number";
    else cout << "Not a palindrome number";
    return 0;
}
