// Program 17: Check whether a number is present using Linear Search.

#include <iostream>
using namespace std;

int main() {
    int n, a[100], key;
    bool found = false;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n < 1 || n > 100) return 0;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter number to check: ";
    cin >> key;

    for (int i = 0; i < n; i++)
        if (a[i] == key) { found = true; break; }

    if (found) cout << "Number is present" << endl;
    else cout << "Number is not present" << endl;
    return 0;
}
