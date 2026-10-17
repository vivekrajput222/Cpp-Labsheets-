#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; ; i++) {
        int product = number * i;
        if (product > 50) break;
        cout << number << " x " << i << " = " << product << endl;
    }
    return 0;
}
