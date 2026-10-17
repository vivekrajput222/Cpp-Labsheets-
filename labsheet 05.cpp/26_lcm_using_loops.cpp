#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two positive numbers: ";
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "Please enter positive numbers";
        return 0;
    }

    int larger = (a > b) ? a : b;
    int lcm = larger;
    while (lcm % a != 0 || lcm % b != 0) lcm++;
    cout << "LCM = " << lcm;
    return 0;
}
