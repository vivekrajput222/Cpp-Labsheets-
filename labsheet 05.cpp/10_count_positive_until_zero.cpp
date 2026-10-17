#include <iostream>
using namespace std;

int main() {
    int number, count = 0;
    cout << "Enter numbers (0 to stop): ";

    while (true) {
        cin >> number;
        if (number == 0) break;
        if (number > 0) count++;
    }
    cout << "Positive numbers entered = " << count;
    return 0;
}
