#include <iostream>
using namespace std;

int main() {
    for (int number = 2; number <= 1000; number++) {
        int sum = 0;
        for (int i = 1; i <= number / 2; i++) {
            if (number % i == 0) sum += i;
        }
        if (sum == number) cout << number << " ";
    }
    return 0;
}
