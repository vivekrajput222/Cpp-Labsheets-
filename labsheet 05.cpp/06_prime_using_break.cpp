#include <iostream>
using namespace std;

int main() {
    int number;
    bool prime = true;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 2) prime = false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            prime = false;
            break; // No need to check further
        }
    }
    if (prime) cout << "Prime number";
    else cout << "Not a prime number";
    return 0;
}
