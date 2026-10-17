#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter numbers (-1 to stop): ";

    while (true) {
        cin >> number;
        if (number == -1) break;
        if (number < 0) continue; // Skip other negative numbers
        cout << "Accepted: " << number << endl;
    }
    return 0;
}
