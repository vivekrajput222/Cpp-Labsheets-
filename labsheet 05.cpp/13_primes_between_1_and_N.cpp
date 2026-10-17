#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    for (int number = 2; number <= n; number++) {
        bool prime = true;
        for (int divisor = 2; divisor * divisor <= number; divisor++) {
            if (number % divisor == 0) {
                prime = false;
                break;
            }
        }
        if (prime) cout << number << " ";
    }
    return 0;
}
