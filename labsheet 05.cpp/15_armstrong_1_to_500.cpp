#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 500; number++) {
        int temp = number, digits = 0, sum = 0;
        int copy = number;
        do {
            digits++;
            copy /= 10;
        } while (copy != 0);

        copy = temp;
        do {
            int digit = copy % 10, power = 1;
            for (int i = 0; i < digits; i++) power *= digit;
            sum += power;
            copy /= 10;
        } while (copy != 0);

        if (sum == number) cout << number << " ";
    }
    return 0;
}
