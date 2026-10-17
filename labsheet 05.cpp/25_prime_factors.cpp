#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a positive number: ";
    cin >> number;
    if (number < 2) {
        cout << "Enter a number greater than 1";
        return 0;
    }

    cout << "Prime factors: ";
    for (int factor = 2; factor <= number; factor++) {
        while (number % factor == 0) {
            cout << factor << " ";
            number /= factor;
        }
    }
    return 0;
}
