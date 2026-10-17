// Program 14: Search an element using Linear Search.

#include <iostream>
using namespace std;

int main() {
    int n, a[100], key, position = -1;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n < 1 || n > 100) return 0;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++)
        if (a[i] == key) { position = i; break; }

    if (position == -1) cout << "Element not found" << endl;
    else cout << "Element found at position " << position + 1 << endl;
    return 0;
}
