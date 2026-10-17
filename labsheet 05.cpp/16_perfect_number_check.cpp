#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter a positive number: ";
    cin >> number;

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) sum += i;
    }
    if (number > 1 && sum == number) cout << "Perfect number";
    else cout << "Not a perfect number";
    return 0;
}
