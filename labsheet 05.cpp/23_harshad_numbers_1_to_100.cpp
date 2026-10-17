#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 100; number++) {
        int temp = number, digitSum = 0;
        while (temp > 0) {
            digitSum += temp % 10;
            temp /= 10;
        }
        if (number % digitSum == 0) cout << number << " ";
    }
    return 0;
}
