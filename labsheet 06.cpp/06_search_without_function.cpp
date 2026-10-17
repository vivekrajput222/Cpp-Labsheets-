// Program 6: Search an element in a 1D array without using functions.

#include <iostream>
using namespace std;

int main() {
    int n, a[100], key, found = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n < 1 || n > 100) return 0;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            cout << "Element found at position " << i + 1 << endl;
            found = 1;
            break;
        }
    }
    if (!found) cout << "Element not found" << endl;
    return 0;
}
