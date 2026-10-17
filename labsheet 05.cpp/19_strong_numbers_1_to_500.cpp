#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 500; number++) {
        int temp = number, sum = 0;
        do {
            int digit = temp % 10, factorial = 1;
            for (int i = 1; i <= digit; i++) factorial *= i;
            sum += factorial;
            temp /= 10;
        } while (temp != 0);

        if (sum == number) cout << number << " ";
    }
    return 0;
}
